class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        int zerocount=0;
        int onecount=0;
        int maxcount=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1')
            onecount++;
        }
        for(int i=0; i<n-1; i++){
            if(s[i]=='0'){
            zerocount++;
            }
            if(s[i]=='1'){
            onecount--;
            }
            int totalcount=onecount+zerocount;
            maxcount=max(maxcount,totalcount);
        }
        return maxcount;
        
    }
};