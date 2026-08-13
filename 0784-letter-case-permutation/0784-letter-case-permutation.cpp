class Solution {
public:
    void helper(int n,string &s,int i,vector<string>&ans){
        if(i == n){
            ans.push_back(s);
            return;
        }
        if(isdigit(s[i])){
            helper(n,s,i+1,ans);
        }
        else{
         s[i] = tolower(s[i]);
         helper(n,s,i+1,ans);
         s[i] = toupper(s[i]);
         helper(n,s,i+1,ans);
        }
    }
    vector<string> letterCasePermutation(string s) {
        int n = s.length();

        vector<string>ans;

        helper(n,s,0,ans);
        return ans;
    }
};