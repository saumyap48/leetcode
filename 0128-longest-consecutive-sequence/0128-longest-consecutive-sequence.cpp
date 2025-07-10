class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int n=nums.size();
      if(n==0) return 0;
     unordered_set<int> s(nums.begin(), nums.end());
     vector<int>UniqueElements;
     for(auto it=s.begin(); it!=s.end(); it++){
        UniqueElements.push_back(*it);
     }
    
      int longestLength=0;
      for(int i=0; i<UniqueElements.size(); i++){
        int num=UniqueElements[i];
    if(s.find(num-1)==s.end()){
        int currentNumber=num;
        int longestStreak=1;
    while(s.find(currentNumber+1)!=s.end()){
        currentNumber++;
        longestStreak++;
        }
    longestLength=max(longestStreak,longestLength);
       }
      }
      return longestLength;
    }
    };