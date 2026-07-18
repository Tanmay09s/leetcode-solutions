class Solution {

    public int gcd(int maxi,int mini){
    while(mini != 0){
        int temp = mini;
        mini = maxi % mini;
        maxi = temp;
    }
    return maxi;
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