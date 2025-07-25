class Solution {
public:
    string minWindow(string s, string t) {
        int minlength=INT_MAX;
        int sIndex=-1;
        int l=0,r=0;
        int hash[256]={0};
        for(char c: t){
            hash[c]++;
        }
        int count=0;
        while(r<s.size()){
         if(hash[s[r]]>0){
            count++;
         }
         hash[s[r]]--;
         while(count==t.size()){
           if(r-l+1<minlength){
            minlength=r-l+1;
            sIndex=l;
           }
           hash[s[l]]++;
           if(hash[s[l]]>0){
            count--;
           }
           l++;
         }
         r++;
        }
        return (sIndex==-1) ? "" : s.substr(sIndex,minlength);
    }
};