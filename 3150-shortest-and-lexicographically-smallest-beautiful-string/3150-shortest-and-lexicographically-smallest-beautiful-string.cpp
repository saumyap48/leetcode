class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int minlength=INT_MAX;
        int l=0;
        int sum=0;
        int start=-1;
        for(int i=0; i<n; i++){
             if(s[i]=='1'){
                sum++;
             }
         while(sum>=k){
            int currentlength=i-l+1;
         if(currentlength<minlength){
           minlength = currentlength;
             start=l;
            }else if(currentlength==minlength){
                if(s.substr(l,currentlength)<s.substr(start,minlength)){
                    start=l;
                }
            }
            if(s[l]=='1'){
              sum--;
            }
          l++;
        }
        }
         if(start==-1){
            return "";
         }
         return s.substr(start,minlength);
    }
};