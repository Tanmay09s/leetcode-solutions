class Solution {
    public boolean increasingTriplet(int[] arr) {
        int min1 = Integer.MAX_VALUE;
        int min2 = Integer.MAX_VALUE;
       
        for(int i: arr){
            if(i <= min1)min1 = i;
            else if(i <= min2)min2 = i;
            else return true;
        }
        return false;
    }
}