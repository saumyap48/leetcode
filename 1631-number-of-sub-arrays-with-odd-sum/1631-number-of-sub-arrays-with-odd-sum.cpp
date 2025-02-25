class Solution {
public:
const int MOD=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        int oddcount=0,evencount=1;
        int prefixsum=0,answer=0;
        for(int i=0; i<n; i++){
            prefixsum+=arr[i];
                if(prefixsum%2==0){
                    answer=(oddcount+answer)%MOD;
                    evencount++;
                }
                else {
            answer = (answer + evencount) % MOD;
            oddcount++;
        }

            }
            return answer;
    }
};