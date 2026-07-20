class Solution {
public:

int helper(int n){
    int sum = 0;
    int num = n;

    while(num != 0){
        sum += num % 2;
        num = num / 2;
    }
    return sum;
}
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i = 0;i<=n;i++){
            ans.push_back(helper(i));
        }
            return ans;
    }
};