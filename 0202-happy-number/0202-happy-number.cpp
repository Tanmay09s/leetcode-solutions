class Solution {
public:

    int getNext(int n){
        int ans = 0;
        while(n != 0){
            int bit = n % 10;
            ans += bit * bit;
            n = n / 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int>st;

        while(n != 1 && st.find(n) == st.end()){
            st.insert(n);
            n = getNext(n);
        }
        return n == 1;
    }
};