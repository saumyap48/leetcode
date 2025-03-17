class Solution {
public:
    bool divideArray(vector<int>& nums) {
         int n=nums.size();
         vector<int>freq(501,0);
         for(int num:nums){
            freq[num]++;
         }
         for(int i=0; i<500; i++){
            if(freq[i]%2!=0){
             return false;
         }
     
         }
         return true;
    }
};