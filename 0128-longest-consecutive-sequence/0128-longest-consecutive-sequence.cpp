class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int n=nums.size();
      if(n==0) return 0;
     unordered_set<int> s(nums.begin(), nums.end());

      int longestLength=0;
      for(int i=0; i<n; i++){
    if(s.find(nums[i]-1)==s.end()){
        int currentNumber=nums[i];
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