class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int>group;
        int ones = 0;

        for(char ch : s){
            if(ch == '1')ones++;
        }

        for(int i=0;i<s.length();){
            if(s[i] == '0'){
                int len = 0;
                while(i < s.length() && s[i] == '0'){
                    len++;
                    i++;
                }
                group.push_back(len);
            }
            else i++;
        }
        int mx = 0;
        for(int i = 1;i<group.size();i++){
            mx = max(mx,group[i-1] + group[i]);
        }
        return ones + mx;
    }
};