class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        set<int>st1;
        set<int>st2;
        int n = nums1.size();

        for(int i : nums1)st1.insert(i); 

        for(int i : nums2)st2.insert(i);

        for(int i : st1){
            if(st2.find(i) == st2.end())ans[0].push_back(i);
        }

          for(int i : st2){
            if(st1.find(i) == st1.end())ans[1].push_back(i);
        }
        return ans;
    }
};