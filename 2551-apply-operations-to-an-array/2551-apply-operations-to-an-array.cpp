class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i]==nums[i+1]){
            nums[i]=2*nums[i];
            nums[i+1]=0;
            }
        }
        vector<int>answer;
        int countzero=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0)
            answer.push_back(nums[i]);
            else
            countzero++;
        }
        while(countzero>0){
            answer.push_back(0);
            countzero--;
        }
        return answer;

    }
};