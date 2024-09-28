class Solution {
public:
int sumofdigits(int num){
        int sum=0;
        while(num!=0){
         sum+=num%10;
         num/=10;
        }
       return sum;
    }
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int num:nums){
            int curr=sumofdigits(num);
            if(curr<mini){
           mini=curr;
            }
        }
        return mini;
    }
};