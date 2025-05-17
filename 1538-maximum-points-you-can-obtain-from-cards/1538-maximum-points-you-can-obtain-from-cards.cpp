class Solution {
public:
    int maxScore(vector<int>& cardScore, int k) {
      int rsum=0,lsum=0,maxsum=0;
    for(int i=0; i<k; i++){
        lsum+=cardScore[i];
        maxsum=lsum;
    }
    int rightIndex=cardScore.size()-1;
    for(int i=k-1; i>=0; i--){
        lsum-=cardScore[i];
        rsum+=cardScore[rightIndex];
        rightIndex--;
        maxsum=max(maxsum,lsum+rsum);
    }
    return maxsum;
    }
};