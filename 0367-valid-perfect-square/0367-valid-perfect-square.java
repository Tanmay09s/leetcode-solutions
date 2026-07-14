class Solution {
    public boolean isPerfectSquare(int n) {
        long start = 1;
        long end = n;

        while(start <= end){
            long mid = start + (end - start)/2;

            if(mid * mid == n)return true;
            else if(mid * mid < n)start = mid + 1;
            else end = mid - 1; 
        }
        return false;
    }
}