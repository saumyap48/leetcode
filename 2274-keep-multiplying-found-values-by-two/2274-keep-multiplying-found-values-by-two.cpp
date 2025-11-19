class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
    while(true){
        int n=nums.size();
        bool found=false;
        for(int i=0; i<n; i++){
           if(nums[i]==original){
            original*=2;
            found=true;
            break;
           }
        }
        if(!found)
        break;
    }
    return original;
    }
};