class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0;
        int count1=0,count2=0;
        for(int num:nums1){
        if(num==0){
            count1++;
        } else{
            sum1+=num;
        }
        }
        for(int num:nums2){
        if(num==0){
            count2++;
        } else{
            sum2+=num;
        }
        }
        long long min_sum1=sum1+count1;
        long long min_sum2=sum2+count2;
        if(min_sum1==min_sum2){
            return min_sum1;
        }
        else if(min_sum1<min_sum2){
            if(count1==0){
                return -1;
            }else{
                return min_sum2;
            }
        }else{
            if(count2==0){
                return -1;
            }
            else{
                return min_sum1;
            }
        }
    }
};