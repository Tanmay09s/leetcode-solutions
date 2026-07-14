class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {  // Continue until x becomes 0.
            int rem = x % 10;  // Extract the last digit of x.
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && rem > 7)) return 0; // Handle overflow.
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && rem < -8)) return 0; // Handle overflow for negative numbers.
            ans = ans * 10 + rem;  // Build the reversed number.
            x = x / 10;  // Remove the last digit of x.
        }
        return ans;
    }
};
