class Solution {
public:
    vector<int> resultArray(vector<int>& arr) {
        vector<int>temp1;
        vector<int>temp2;
        vector<int>ans;
        int n = arr.size();
        temp1.push_back(arr[0]);
        temp2.push_back(arr[1]);

        for(int i = 2;i<n;i++){
            if(temp1.back() > temp2.back())temp1.push_back(arr[i]);
            else temp2.push_back(arr[i]);
        }

        for(int i=0;i<temp1.size();i++){
            ans.push_back(temp1[i]);
        }
         for(int i=0;i<temp2.size();i++){
            ans.push_back(temp2[i]);
        }
return ans;
    }
};