class Solution {
public:
    int uniqueXorTriplets(vector<int>& arr) {
         int n = arr.size();
        const int MAXX = 2048;
        
        vector<bool>xorPairs(MAXX,false);
        vector<int>ans(MAXX,false);

        for(int i=0;i<n;i++){
            for(int j = i;j<n;j++){
                xorPairs[arr[i] ^ arr[j]] = true;
            }
        }

       for(int num : arr){
        for(int i=0;i<MAXX;i++){
            if(xorPairs[i]){
                ans[num ^ i] = true;
            }
        }
       }

       int cnt =0;

       for(int i=0;i<ans.size();i++){
        if(ans[i])cnt++;
       }
       return cnt;
    }
};