class Solution {
    public int maximumProduct(int[] nums) {
        int n = nums.length;
        int firstS = Integer.MAX_VALUE;
        int secondS = Integer.MAX_VALUE;

        int firstL = Integer.MIN_VALUE;
        int secondL = Integer.MIN_VALUE;
        int thirdL = Integer.MIN_VALUE;

        for(int i=0;i<n;i++){
            if(nums[i] > firstL){
                thirdL = secondL;
                secondL = firstL;
                firstL = nums[i];
            }
            else if(nums[i] > secondL){
                thirdL = secondL;
                secondL = nums[i];
            }
            else if(nums[i] > thirdL){
                thirdL = nums[i];
            }

            if(nums[i] < firstS){
                secondS = firstS;
                firstS = nums[i];
            }
            else if(nums[i] < secondS){
                secondS = nums[i];
            }
        }
        return Math.max(firstL * secondL * thirdL,firstS * secondS * firstL);
    }
}