class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
    unordered_map<int,int>freq;
    int n=nums.size();
    int left=0, right=0, maxsum=0, sum=0;
    while(right<n){
    while(freq[nums[right]]>0){
        freq[nums[left]]--;
        sum-=nums[left];
        left++;
    }
    freq[nums[right]]++;
    sum+=nums[right];
    maxsum=max(maxsum,sum);
    right++;
    }
    return maxsum;
    }
};