class Solution
{
    vector<int>findPrefixMax(vector<int>&arr,int &n){
        vector<int>prefixMax(n);
        prefixMax[0]=arr[0];
        for(int i=1; i<n; i++){
            prefixMax[i]=max(prefixMax[i-1],arr[i]);
        }
        return prefixMax;
    }
        vector<int>findSuffixMax(vector<int>&arr,int &n){
        vector<int>suffixMax(n);
        suffixMax[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--){
            suffixMax[i]=max(suffixMax[i+1],arr[i]);
        }
        return suffixMax;
    }
public:
    int trap(vector<int> &height){
        int n=height.size();
        int total=0;
        vector<int>leftMax=findPrefixMax(height,n);
        vector<int>rightMax=findSuffixMax(height,n);
        for(int i=0; i<n; i++){
            if(height[i]<leftMax[i] && height[i]<rightMax[i]){
                total+=(min(leftMax[i],rightMax[i])-height[i]);
            }
        }
        return total;
    }
};