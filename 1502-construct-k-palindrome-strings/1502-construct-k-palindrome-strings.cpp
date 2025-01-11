class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.length()){
        return false;
        }
        unordered_map<char,char>freq;
        for(char c:s){
            freq[c]++;
        }
        int oddcount=0;
        for(auto& entry:freq){
            if(entry.second%2!=0){
                oddcount++;
            }
        }
        return oddcount<=k;
    }
};