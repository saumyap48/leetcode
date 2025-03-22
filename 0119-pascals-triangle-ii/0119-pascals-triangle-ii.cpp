class Solution {
public:
    vector<int> getRow(int r) {
         vector<int>answer(r+1);
          answer[0]=1;
          for(int i=1; i<=r; i++){
            answer[i]=(1LL *answer[i-1]*(r-i+1))/i;
          }
          return answer; 
    }
};