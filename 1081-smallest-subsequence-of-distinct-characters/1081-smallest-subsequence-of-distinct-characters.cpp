class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>ind(26);
        vector<bool>seen(26);
        string ans;

        for(int i = 0;i<s.length();i++){
            ind[s[i] - 'a'] = i;
        }

        for(int i=0;i<s.length();i++){
            char ch = s[i];

            if(seen[ch - 'a'])continue;

            while(!ans.empty() && ans.back() > ch && ind[ans.back() - 'a'] > i){
                seen[ans.back() - 'a'] = false;
                ans.pop_back();
            }

            ans.push_back(ch);
            seen[ch - 'a'] = true;
        }
        return ans;
    }
};