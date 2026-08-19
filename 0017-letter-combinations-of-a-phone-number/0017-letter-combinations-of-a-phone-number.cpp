class Solution {
public:
vector<string>mp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    void helper(int index,string &digits,string &temp,vector<string>&ans){
        if(index == digits.size()){
            ans.push_back(temp);
            return;
        }
        string letters = mp[digits[index] - '0'];

        for(char ch : letters){
            temp.push_back(ch);
            helper(index + 1,digits,temp,ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;

        if(digits.empty())return ans;
        string temp;
        helper(0,digits,temp,ans);
        return ans;
    }
};