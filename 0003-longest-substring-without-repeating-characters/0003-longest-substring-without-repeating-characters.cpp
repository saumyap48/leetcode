class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.size();
        int maxlength=0;
        int hash[256]={-1};
        fill(hash,hash+256,-1);
        int l=0,r=0;
        while(r<n){
            if(hash[s[r]]!=-1){
         if(hash[s[r]]>=l){
          l=hash[s[r]]+1;
            }
               }
             maxlength=max(maxlength,r-l+1);
             hash[s[r]]=r;
             r++;
        }
        return maxlength;
    }
};