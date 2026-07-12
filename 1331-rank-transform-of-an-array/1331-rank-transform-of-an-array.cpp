class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>sorted = arr;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int>mpp;
        int n = arr.size();
        int rank = 1;

        for(int a : sorted){
            if(mpp.find(a) == mpp.end()){
                mpp[a] = rank;
                rank++;
            }
        }

        for(int i=0;i<n;i++){
            arr[i] = mpp[arr[i]];
        }
        return arr;
    }
};