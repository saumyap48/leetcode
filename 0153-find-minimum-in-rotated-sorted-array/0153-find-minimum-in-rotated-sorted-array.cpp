class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int low=0,high=n-1;
        int answer=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[mid]){
           answer=min(answer,arr[low]);
            low=mid+1;
            }
            else{
               answer=min(answer,arr[mid]);
               high=mid-1;
        }
    }
    return answer;
    }
};