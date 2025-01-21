class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int num:nums){
            int index=abs(num)-1;
            nums[index]=-abs(nums[index]);
        }
        vector<int>answer;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0)
            answer.push_back(i+1);
        }
        return answer;
    }
};