class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
          int n=customers.size();
          int maxsum=INT_MIN;
          int base=0;
          for(int i=0; i<n; i++){
            if(grumpy[i]==0){
                base+=customers[i];
            }
          }
          for(int i=0; i<=n-minutes; i++){
            int sum=0;
          for(int j=i; j<i+minutes; j++){
            if(grumpy[j]==1){
              sum+=customers[j];
            }
            }
            if(maxsum<sum){
                maxsum=sum;
            }
          }
          return base+maxsum;
    }
};