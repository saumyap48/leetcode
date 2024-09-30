class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.size();
        int maxlength=0;
        int hash[256]={0};
        for(int i=0; i<n; i++){
            fill(hash,hash+256,0);
         for(int j=i; j<n; j++){

            if(hash[s[j]]==1){
                break;
            }
            hash[s[j]]=1;
                int leng=j-i+1;

                maxlength=max(leng,maxlength);
         }
         
        }
        return maxlength;
    }
};