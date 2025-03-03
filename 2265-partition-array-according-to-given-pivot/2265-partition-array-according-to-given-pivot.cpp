class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>answer;
        for(int num:nums){
            if(num<pivot)
        answer.push_back(num);
        }
        for(int num:nums){
            if(num==pivot)
        answer.push_back(num);
        }
        for(int num:nums){
            if(num>pivot)
         answer.push_back(num);
        }
        return answer;
    }
};