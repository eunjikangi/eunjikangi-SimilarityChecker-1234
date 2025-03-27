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

};