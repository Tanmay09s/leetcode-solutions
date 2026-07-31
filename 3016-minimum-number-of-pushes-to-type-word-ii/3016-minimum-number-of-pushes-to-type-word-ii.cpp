class Solution {
public:
    int minimumPushes(string word) {
        vector<int> cnt(26, 0);

        for (char c : word)
            cnt[c - 'a']++;

        int ans = 0;
        sort(cnt.begin(),cnt.end(),greater<int>());
        for (int i = 0; i < 26; i++) {
            ans += cnt[i] * (i / 8 + 1);
        }
        return ans;
    }
};