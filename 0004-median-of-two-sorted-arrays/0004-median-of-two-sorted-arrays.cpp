class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
          int n1=a.size();
        int n2=b.size();
        vector<int>merged;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
            merged.push_back(a[i++]);
            }
            else{
            merged.push_back(b[j++]);
            }
        }
        while(i<n1){
        merged.push_back(a[i++]);
        }
         while(j<n2){
        merged.push_back(b[j++]);
        }
        int n=n1+n2;
        if(n%2==1){
        return (double)merged[n/2];
        }
         double median = ((double)merged[n/2] + (double)merged[(n/2) - 1]) / 2.0;
         return median;
    }
};
