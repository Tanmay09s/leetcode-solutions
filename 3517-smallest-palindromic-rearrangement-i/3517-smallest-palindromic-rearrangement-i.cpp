class Solution {
public:
    string smallestPalindrome(string s) {
     int n = s.length();
     string ans;
     vector<int>freq(26,0);

     for(int i=0;i<n;i++){
        freq[s[i] - 'a']++;
     }   
     string left ;
     char middle = '\0';

     for(int i=0;i<26;i++){
        left.append(freq[i]/2,'a' + i);

        if(freq[i] % 2 == 1)middle = 'a' + i;
     }

     string right = left;

     reverse(right.begin(),right.end());

     if(middle != '\0'){
        return left + middle + right;
     }
     return left + right;
    }
};