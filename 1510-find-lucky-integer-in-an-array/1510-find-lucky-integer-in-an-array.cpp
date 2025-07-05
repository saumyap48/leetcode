class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        int maxi=-1;
        int answer=0;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
       for(auto it:freq){
        if(it.first==it.second){
           maxi=max(maxi,it.first);
        }
       }
       return maxi;
    }
};