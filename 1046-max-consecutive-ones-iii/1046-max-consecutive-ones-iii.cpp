class Solution {
public:
    int longestOnes(vector<int>& str, int k) {
        int n=str.size();
        int start=0;
        int end=0;
        int zerocount=0;
        int size=0;
        for(; end<n; end++){
            if(str[end]==0)
                zerocount++;
        
            while(zerocount>k){
                if(str[start]==0){
                zerocount--;
            }
                start++;
        }
            size=max(size,end-start+1);
        }
        return size;
    }
};