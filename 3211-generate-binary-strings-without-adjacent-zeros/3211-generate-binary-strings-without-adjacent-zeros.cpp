class Solution {
public:

    void helper(int n,string s,int i,vector<string>&ans){
        if(i >= n){
            ans.push_back(s);
            return;
        }

        s[i] = '1';
        helper(n,s,i+1,ans);

        s[i] = '0';
        if(i + 1 < n){
            s[i + 1] = '1';
        }
        helper(n,s,i+2,ans);
    }
    vector<string> validStrings(int n) {
        vector<string>ans;
        string s(n,'0');
        helper(n,s,0,ans);
        return ans;
    }
};