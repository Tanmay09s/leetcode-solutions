class Solution {

    public int helper(int a,int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    public int findGCD(int[] arr) {
        int mini = Integer.MAX_VALUE;
        int maxi = Integer.MIN_VALUE;

        int n = arr.length;

        for(int i=0;i<n;i++){
            mini = Math.min(mini,arr[i]);
            maxi = Math.max(maxi,arr[i]);
        }

        return helper(maxi,mini);
    }
}