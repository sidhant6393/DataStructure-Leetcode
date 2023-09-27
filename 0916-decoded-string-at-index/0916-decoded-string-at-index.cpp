#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size = 0;

        // Calculate the size of the decoded string without constructing it
        for (char c : s) {
            if (isdigit(c)) {
                size *= (c - '0');
            } else {
                size++;
            }
        }

        for (int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];
            k %= size;  // Reduce k to the equivalent index within the current string size

            if (k == 0 && isalpha(c)) {
                return string(1, c);
            }

            if (isdigit(c)) {
                size /= (c - '0');
            } else {
                size--;
            }
        }

        return ""; // This should not be reached for valid inputs
    }
};
