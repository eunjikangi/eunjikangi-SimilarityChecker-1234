#include "gmock/gmock.h"
#include "similarityChecker.cpp"

using namespace std;

class SimilarityCheckerFixture : public testing::Test {
public:
	SimilarityChecker similarityChecker;

	void checkStringLen(string str1, string str2, int expected) {
		EXPECT_EQ(expected, similarityChecker.lengthCheck(str1, str2));
	}

	void checkStringAlpha(string str1, string str2, int expected) {
		EXPECT_EQ(expected, similarityChecker.alphaCheck(str1, str2));
	}
};

TEST_F(SimilarityCheckerFixture, StringNum1)
{
	checkStringLen("ASD", "DSA", 60);
}

TEST_F(SimilarityCheckerFixture, StringNum2)
{
	checkStringLen("A", "BB", 0);
}

TEST_F(SimilarityCheckerFixture, StringNum3)
{
	checkStringLen("AAABB", "BAA", 20);
}

TEST_F(SimilarityCheckerFixture, StringNum4)
{
	checkStringLen("AA", "AAE", 30);
}

TEST_F(SimilarityCheckerFixture, AlphaCheck1)
{
	checkStringAlpha("ASD", "DSA", 40);
}

TEST_F(SimilarityCheckerFixture, AlphaCheck2)
{
	checkStringAlpha("A", "BB", 0);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}