class Solution {
public:
    int SumOfDigit(int num){
        int sum=0;
        while(num>0){
            sum=sum+num%10;
            num/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>digitsum;
        int maxsum=-1;
        for(int num:nums){
            int digit=SumOfDigit(num);
            if(digitsum[digit]){
                maxsum=max(maxsum,digitsum[digit]+num);
            }
            digitsum[digit]=max(digitsum[digit],num);
        }
        return maxsum;
    }
};