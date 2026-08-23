class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();

        int rightSum = 0;
        int leftSum = 0;
        int leftQ = 0;
        int rightQ = 0;

        for(int i=0;i<n/2;i++){
            if(num[i] == '?')leftQ++;
            else
            leftSum += num[i] - '0';
        }

        for(int i = n/2;i<n;i++){
            if(num[i] == '?')rightQ++;
            else
            rightSum += num[i] - '0';
        }

        if((rightQ + leftQ) % 2 == 1)return true;

        return leftSum - rightSum != (rightQ - leftQ) / 2 * 9;

    }
};