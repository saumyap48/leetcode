class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n=s.size();
        int maxlength=0;
        for(int i=0; i<n; i++){
        vector<int> hash(256,0);
        for(int j=i; j<n; j++){
            if(hash[s[j]]==1)
            break;
            hash[s[j]]=1;
            int length=j-i+1;
            maxlength=max(maxlength,length);
        }

        }
       return maxlength;
    }
};