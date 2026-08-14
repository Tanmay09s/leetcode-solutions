class Solution {
public:

    void helper(int n,string s,int open,int close,vector<string>&ans){
        if(s.length() == 2 * n){
            ans.push_back(s);
            return;
        }
        if(open < n){
            s = s + '(';
            helper(n,s,open + 1,close,ans);
            s.pop_back();
        }
        if(close < open){
            s = s + ')';
            helper(n,s,open,close+1,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        vector<string>ans;
        helper(n,s,0,0,ans);
        return ans;
    }
};