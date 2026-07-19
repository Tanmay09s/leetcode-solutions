class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>ind(26);
        vector<bool>check(26);
        stack<int>st;

        for(int i=0;i<s.length();i++)ind[s[i] - 'a'] = i;

        for(int i = 0;i<s.length();i++){
            
            if(check[s[i] - 'a'])continue;

            while(!st.empty() && st.top() > s[i] && ind[st.top() - 'a'] > i){
                check[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            check[s[i] - 'a'] = true;
        }
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};