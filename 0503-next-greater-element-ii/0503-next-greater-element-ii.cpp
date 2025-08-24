class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
      int n=arr.size();
        vector<int>ans(n,-1);
        for(int i=0; i<n; i++){
            int currElement=arr[i];
        for(int j=1; j<n; j++){
            int ind=(j+i)%n;
            if(arr[ind]>currElement){
                ans[i]=arr[ind];
                break;
            }
        }
        }
        return ans;
    }
};