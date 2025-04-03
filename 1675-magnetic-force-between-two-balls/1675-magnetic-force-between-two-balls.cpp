class Solution {
public:
 bool CanWePlace(vector<int>&nums,int distance,int magnet){
        int n=nums.size();
        int countCows=1;
        int last=nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]-last>=distance){
                countCows++;
                last=nums[i]; 
            }
            if(countCows>=magnet) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& nums, int m) {
        int answer=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=1,high=nums[n-1]-nums[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(CanWePlace(nums,mid,m)==true){
                answer=mid;
            low=mid+1;
            }
            else
            high=mid-1;
        }
        return  high;
    }
};