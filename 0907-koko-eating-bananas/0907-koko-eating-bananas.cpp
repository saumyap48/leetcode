class Solution {
public:
  int findMax(vector<int>& v) {
      int maxi = v[0];  
      for (int i = 1; i < v.size(); i++) {
          maxi = max(maxi, v[i]);
      }
      return maxi;
  }

  long long calculateTotalHours(vector<int>& v, int hourly) {
      long long totalH = 0;
      for (int i = 0; i < v.size(); i++) {
          totalH += (long long)ceil((double)v[i] / hourly);  
      }
      return totalH;
  }

  int minEatingSpeed(vector<int>& nums, int h) {
      int low = 1, high = findMax(nums);
      while (low <= high) {
          int mid = low + (high - low) / 2;  
          long long requiredTime = calculateTotalHours(nums, mid); // FIXED here
          if (requiredTime <= h) {
              high = mid - 1;
          } else {
              low = mid + 1;
          }
      }
      return low;
  }
};


