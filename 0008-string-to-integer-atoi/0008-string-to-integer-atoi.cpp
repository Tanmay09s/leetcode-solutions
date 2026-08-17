class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long res = 0;  // Using long to handle overflow before returning
        int sign = 1;

        // 1. Ignore leading whitespace
        while (i < s.length()) {
            if (s[i] == ' ') {
                i++;
            } else {
                break;
            }
        }

        // 2. Check sign
        if (i < s.length()) {
            if (s[i] == '-') {
                sign = -1;
                i++;
            } else if (s[i] == '+') {
                i++;
            }
        }

        // 3. Convert characters to integer
        while (i < s.length()) {
            if (s[i] >= '0' && s[i] <= '9') {
                res = res * 10 + (s[i] - '0');

                // 4. Handle overflow
                if (sign == 1 && res > INT_MAX) return INT_MAX;
                if (sign == -1 && -res < INT_MIN) return INT_MIN;
            } else {
                break; // Stop if a non-digit character is encountered
            }
            i++;
        }

        return res*sign;
    }
};