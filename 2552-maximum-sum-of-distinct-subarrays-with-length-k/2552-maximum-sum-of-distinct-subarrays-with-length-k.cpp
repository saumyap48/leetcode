class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        long long answer=0;
        long long currwindow=0;
        unordered_set<int>st;
        int i=0; 
        int j=0;
        while(j<n){
            while(st.count(arr[j])){
                currwindow-=arr[i];
                st.erase(arr[i]);
                i++;
            }
            
        currwindow+=arr[j];
        st.insert(arr[j]);

        if(j-i+1==k){
        answer=max(answer,currwindow);
        currwindow-=arr[i];
        st.erase(arr[i]);
        i++;
        }
        j++;
    }
    return answer;
    }
};