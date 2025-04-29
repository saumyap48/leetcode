class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int n =nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        long long count=0;
        int left=0;
        for(int i=0; i<n; i++){
           freq[nums[i]]++;
        while(freq[maxi]>=k){
            count+=n-i;
            freq[nums[left]]--;
            left++;
        }
        }
        return count;
    }

};