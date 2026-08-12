class Solution {
public:
    int helper(string s,int l,int r,int k){
        if(r - l + 1 < k)return 0;
        
        unordered_map<char,int>freq;

        for(int i = l ;i<=r;i++)freq[s[i]]++;

        for(int i = l;i<=r;i++){
            if(freq[s[i]] < k){
                int left = helper(s,l,i-1,k);
                int right = helper(s,i+1,r,k);
                return max(left,right);
            }
        }
return r - l + 1;
    }
    int longestSubstring(string s, int k) {
        int n = s.length();
        return helper(s,0,n-1,k);
    }
};