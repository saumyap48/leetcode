class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int low=0,high=n-1;
        int answer=arr[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[0]<=arr[mid]){
            low=mid+1;
            }
            else{
               answer=arr[mid];
               high=mid-1;
        }
    }
    return answer;
    }
};