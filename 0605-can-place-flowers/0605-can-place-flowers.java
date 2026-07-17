class Solution {
    public boolean canPlaceFlowers(int[] arr, int n) {
        if(n == 0)return true;
        int len = arr.length;
        int cnt = 0;
        if(len == 1){
            if(arr[0] == 0){
                arr[0] = 1;
                return n <=1;
            }
            return false;
        }
      
        if(arr[0] == 0 && arr[1] == 0){
            arr[0] = 1;
            cnt++;
        }
        if(arr[len - 1] == 0 && arr[len - 2] == 0){
            arr[len - 1] = 1;
            cnt++;
        }

        for(int i = 1;i<len-1;i++){
            if(arr[i] == 1)continue;
            if(arr[i] == 0 && arr[i - 1] == 0 && arr[i+1] == 0){
                arr[i] = 1;
                cnt++;
            }
        }

        return cnt >= n;
    }
}