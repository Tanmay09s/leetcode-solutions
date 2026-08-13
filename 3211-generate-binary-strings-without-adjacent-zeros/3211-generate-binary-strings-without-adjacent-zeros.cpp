class Solution {
public:
    void helper(string &s,int n ,int i,int prev,vector<string>&ans){
        if(i >= n){
            ans.push_back(s);
            return;
        }

        s[i] = '1';
        helper(s,n,i+1,1,ans);

        if(prev == 1){
            s[i] = '0';
            helper(s,n,i+1,0,ans);
        }
    }
    vector<string> validStrings(int n) {
        vector<string>ans;
        string s(n,'0');

         helper(s,n,0,1,ans);
         return ans;
    }
};