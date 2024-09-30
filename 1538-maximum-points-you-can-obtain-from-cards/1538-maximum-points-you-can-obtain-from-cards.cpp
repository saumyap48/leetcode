class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      int n=cardPoints.size();
      int lsum=0;
      int rsum=0;
      int maxsum=0;
      for(int i=0; i<=k-1; i++){
        lsum=lsum+cardPoints[i];
        maxsum=lsum;
      }
      int rightindex=n-1;
      for(int i=k-1; i>=0; i--){
        lsum=lsum-cardPoints[i];
        rsum=rsum+cardPoints[rightindex];
        rightindex=rightindex-1;
        maxsum=max(maxsum,lsum+rsum);
      }
      return maxsum;
    }
};