class Solution {
public:
    int characterReplacement(string s, int k) {
        int r=0;
        int l=0;
        int maxlength=0;
        int maxfreq=0;
        int hash[26]={0};
        while(r<s.size()){
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq,hash[s[r]-'A']);
            if((r-l+1)-maxfreq>k){
                hash[s[l]-'A']--;
                
                for(int i=0; i<0; i++)
                maxfreq=max(maxfreq,hash[i]);
                l++;
            }
            if((r-l+1)-maxfreq<=k)
            maxlength=max(maxlength,r-l+1);
            r++;
        }
        return maxlength;
    }
};