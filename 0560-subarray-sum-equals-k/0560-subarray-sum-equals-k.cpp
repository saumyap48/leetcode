class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
            int n = arr.size(); 
     int count=0,sum=0;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==k){
            count++;
        }
        if(mp.find(sum-k)!=mp.end()){
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    return count;
    }
};
   