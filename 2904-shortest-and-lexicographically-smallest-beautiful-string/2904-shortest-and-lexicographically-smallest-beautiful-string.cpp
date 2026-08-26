class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        int ones = 0;
        string ans = "";

        for (int right = 0; right < s.size(); right++) {
            
            if (s[right] == '1')
                ones++;

            // If we have more than k ones, remove characters
            // until we have exactly k ones again.
            while (ones > k) {
                if (s[left] == '1')
                    ones--;
                left++;
            }

            // When we have exactly k ones, remove leading zeros
            // to make the substring as short as possible.
            while (ones == k && s[left] == '0') {
                left++;
            }

            if (ones == k) {
                string curr = s.substr(left, right - left + 1);

                if (ans == "" || curr.size() < ans.size() ||
                    (curr.size() == ans.size() && curr < ans)) {
                    ans = curr;
                }
            }
        }

        return ans;
    }
};