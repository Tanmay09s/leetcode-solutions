class Solution {

     boolean isVowel(char ch){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')return true;
            return false;
        }
       
    public int maxVowels(String s, int k) {
        int n = s.length();
        int cnt = 0;
        int maxCnt = 0;
       for(int i=0;i<k;i++){
        if(isVowel(s.charAt(i)))cnt++;
       }

       maxCnt = Math.max(cnt,maxCnt);

       for(int i = k ;i<n;i++){
        if(isVowel(s.charAt(i)))cnt++;

        if(isVowel(s.charAt(i-k)))cnt--;

        maxCnt = Math.max(maxCnt,cnt);
       }
       return maxCnt;
    }
}