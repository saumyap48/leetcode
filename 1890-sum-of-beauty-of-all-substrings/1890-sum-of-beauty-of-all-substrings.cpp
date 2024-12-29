class Solution {
public:
    int beautySum(string s) {
        int totalbeauty=0;
        for(int i=0; i<s.length(); i++){
            unordered_map<char,int>freq;
        for(int j=i; j<s.length(); j++){
            freq[s[j]]++;
        int maxfreq=INT_MIN,minfreq=INT_MAX;
        for(auto&pair: freq){
            maxfreq=max(maxfreq,pair.second);
            minfreq=min(minfreq,pair.second);
        }
       totalbeauty+=(maxfreq-minfreq);
        }
          }
          return totalbeauty;
    }
};