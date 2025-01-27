class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>answer;
        for(int i=0; i<n; i++){
             stack<int>s;
             bool found=false;
        for(int j=m-1; j>=0; j--){
            if(nums1[i]==nums2[j]){
            found=true;
            if(s.empty()){
                answer.push_back(-1);
            }
            else{
                answer.push_back(s.top());
            }
           break;
            }
           if(nums2[j]>nums1[i]){
             s.push(nums2[j]);
           }
        }
        if(!found){
            answer.push_back(-1);
        }
        }
        return answer;
    }
};