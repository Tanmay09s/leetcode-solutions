class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int right = n - 1;
        int left = 0;
        string v = "aeiouAEIOU";

        while(left < right){
            while(left < right && v.find(s[left]) == string :: npos)left++;
            while(left < right && v.find(s[right]) == string::npos)right--;

            if(left < right){
                swap(s[right],s[left]);
                left++;
                right--;
            }
        }
        return s;
    }
};