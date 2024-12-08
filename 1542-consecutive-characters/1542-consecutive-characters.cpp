class Solution {
public:
    int maxPower(string s) {
        int count=1,maxcount=1;
        int n=s.length();
        for(int i=0; i<n-1; i++){
           if(s[i]==s[i+1]){
            count++;
           }
           else{
            count=1;
           }
           maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};