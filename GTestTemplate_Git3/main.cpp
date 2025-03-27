#include "gmock/gmock.h"
#include "similarityChecker.cpp"

using namespace std;

class SimilarityCheckerFixture : public testing::Test {
public:
	SimilarityChecker similarityChecker;

	void checkString(string str1, string str2, int expected) {
		EXPECT_EQ(expected, similarityChecker.lengthCheck(str1, str2));
	}
};

TEST_F(SimilarityCheckerFixture, StringNum1)
{
	checkString("ASD", "DSA", 60);
}

TEST_F(SimilarityCheckerFixture, StringNum2)
{
	checkString("A", "BB", 0);
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}