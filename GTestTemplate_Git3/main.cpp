#include "gmock/gmock.h"
#include "similarityChecker.cpp"

using namespace std;

class SimilarityCheckerFixture : public testing::Test {
public:
	SimilarityChecker similarityChecker;
	string str1;
	string str2;
};

TEST_F(SimilarityCheckerFixture, StringNum1)
{
	str1 = "ASD";
	str2 = "DSA";
	EXPECT_EQ(60, similarityChecker.lengthCheck(str1, str2));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}