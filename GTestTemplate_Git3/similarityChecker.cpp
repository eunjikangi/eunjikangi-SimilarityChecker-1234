#include <string>
#include <cmath>

using namespace std;

class SimilarityChecker {
public:
	int lengthCheck(string str1, string str2) {
        int lenA = str1.length();
        int lenB = str2.length();

        double diff = abs(lenA - lenB);
        double shortLen = min(lenA, lenB);

        if (lenA == lenB) {
            return 60;
        }
        
        if (diff >= shortLen) {
            return 0;
        }

        int result = (1.0 - diff / shortLen) * 60;
        return result;
	}

    int alphaCheck(string str1, string str2) {
        int sameCount = 0;
        int totalCount = 0;

        for (int s1 = 0; s1 < str1.length(); ++s1) {
            bool isSame = false;
            for (int s2 = 0; s2 < str2.length(); ++s2) {
                if (str1[s1] == str2[s2]) {
                    isSame = true;
                    break;
                }
            }

            if (isSame == true) {
                sameCount++;
            }

            totalCount++;
        }

        return ((double)sameCount / (double)totalCount) * 40;
    }
};