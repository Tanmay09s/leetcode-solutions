class Solution {
public:
    int uniqueXorTriplets(vector<int>& arr) {
        const int MAXX = 2048;
        vector<bool>seen(MAXX,false);
        vector<bool>ans(MAXX,false);
        int n = arr.size();
        int cnt = 0;

        for(int i =0;i<n;i++){
            for(int j = i;j<n;j++){
                seen[arr[i] ^ arr[j]] = true;
            }
        }

        for(int num : arr){
            for(int i=0;i<MAXX;i++){
                if(seen[i]){
                    ans[num ^ i] = true;
                }
            }
        }

        for(bool i : ans){
            if(i)cnt++;
        }
        return cnt;
    }
};