class Solution {
    public int maxProduct(int[] arr) {
        int maxi1 = Integer.MIN_VALUE;
        int maxi2 = Integer.MIN_VALUE;
        int n = arr.length;

        for(int i=0;i<n;i++){
            if(arr[i] > maxi1){
                maxi2 = maxi1;
                maxi1 = arr[i];
            }
            else if(arr[i] > maxi2){
                maxi2 = arr[i];
            }
        }
            return (maxi1 - 1) * (maxi2 - 1);
    }
}