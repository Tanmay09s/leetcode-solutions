class Solution {
    public int findLucky(int[] arr) {
        HashMap<Integer,Integer>mpp= new HashMap<>();

        for(int num : arr){
            mpp.put(num, mpp.getOrDefault(num,0)+1);
        }
        int ans = -1;
        for(int num : arr){
            if(num == mpp.get(num)){
                ans = Math.max(ans,num);
            }
        }
        return ans;
    }
}