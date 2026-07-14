class Solution {

    public int gcd(int maxi,int mini){
        for(int i = maxi;i>=1;i--){
            if(maxi % i == 0 && mini % i == 0)return i;
        }
        return 1;
    }
    public int findGCD(int[] nums) {
        int mini = Integer.MAX_VALUE;
        int maxi = Integer.MIN_VALUE;

        int n = nums.length;

        for(int i : nums){
            mini = Math.min(mini,i);
            maxi = Math.max(maxi,i);
        }

        return gcd(maxi,mini);
    }
}