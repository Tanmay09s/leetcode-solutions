class Solution {
    public boolean isPalindrome(int x) {

        if(x < 0)return false;

        int ans = 0;
        int y = x;
        while(y != 0){
            int digit = y % 10;

            ans = ans * 10 + digit;

            y = y / 10;
        }
        return ans == x;
    }
}