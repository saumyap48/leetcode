class Solution {
public:
    int maxAscendingSum(vector<int>& arr) {
        int n=arr.size();
        int answer=0;
        int currsum=arr[0];
        for(int i=1; i<n; i++){
            if(arr[i-1]<arr[i]){
                currsum+=arr[i];
            }
            else{
                answer=max(answer,currsum);
                currsum=arr[i];
            }
        }
        answer=max(answer,currsum);
        return answer;
        }
};