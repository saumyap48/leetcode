class Solution {
public:
  vector<int>getLeftMaxArray(vector<int>&height, int& n){
   vector<int> leftmax(n);
   leftmax[0]=height[0];
   for(int i=1; i<n; i++){
   leftmax[i]=max(leftmax[i-1],height[i]);
   }
   return leftmax;
  }

 vector<int>getRightMaxArray(vector<int>&height, int& n){
      vector<int>rightmin(n);
      rightmin[n-1]=height[n-1];
      for(int i=n-2; i>=0; i--){
        rightmin[i]=max(rightmin[i+1],height[i]);
      }
      return rightmin;
  }


 
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax=getLeftMaxArray(height,n);
        vector<int>rightmax=getRightMaxArray(height,n);
        int sum=0;
        for(int i=0; i<n; i++){
       int h=min(leftmax[i],rightmax[i])-height[i];
       sum+=h;
        }
        return sum;
    }
};