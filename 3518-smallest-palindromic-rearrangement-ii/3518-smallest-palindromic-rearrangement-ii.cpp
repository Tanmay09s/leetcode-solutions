class Solution {
public:

      //we only care whether ways >= k
        // so we cap the count at 1000001 to avoid overflow.
        static constexpr long long LIMIT = 1000001; 
        
        long long countWays(vector<int>cnt){
            int total = 0;
            for(int x : cnt)total += x;

            long long ways = 1;
            int used = 0;

            for(int f : cnt){
                if(f == 0)continue;

                for(int i=1;i<=f;i++){
                    ways = ways * (++used) / i;

                    if(ways > LIMIT)ways = LIMIT;
                }
            }
            return ways;
        }

    string smallestPalindrome(string s, int k) {
        vector<int>freq(26,0);
        for(char c : s)freq[c - 'a']++;

        vector<int>half(26,0);

        char mid = '\0';

        for(int i=0;i<26;i++){
            half[i] = freq[i] / 2;

            if(freq[i] & 1)mid = char('a' + i);
        }

            //if total number of palindromes is less than k 
            //then kth palindrome doesnt exist
            if(countWays(half) < k)return "";

            string left = "";

            //number of characters needeed in left half

            int len = s.size() / 2;

            while(left.size() < len){
                for(int c = 0;c<26;c++){
                    if(half[c] == 0)continue;

                    half[c]--;

                    long long ways = countWays(half);

                    if(ways >= k){
                        left.push_back(char('a' + c));
                        break;
                    }
                    k -= ways;
                    half[c]++;
                }
            }

            string right = left;
            reverse(right.begin(),right.end());

            if(mid != '\0')return left + mid + right;
            return left + right;
        
    }
};