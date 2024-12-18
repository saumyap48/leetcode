class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        int n=arr.size();
        int mini=INT_MAX;
        vector<int>answer;
        for(int i=0; i<n; i++){
        int discount=0;
        for(int j=i+1; j<n; j++){
            if(arr[j]<=arr[i]){
                discount=arr[j];
                break;
            }
        }
        answer.push_back(arr[i]-discount);
        }
        return answer;
    }
};