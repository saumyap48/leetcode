class Solution {
public:
    int thirdMax(vector<int>& arr) {
       set<int>uniqueNums(arr.begin(),arr.end());
       vector<int>sortedNums(uniqueNums.begin(),uniqueNums.end());
       if(sortedNums.size()<3){
        return sortedNums.back();
       }
       return sortedNums[sortedNums.size()-3];
    }
};