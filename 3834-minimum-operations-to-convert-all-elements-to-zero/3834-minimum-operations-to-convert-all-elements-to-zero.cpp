
class Solution {
public:
    int minOperations(vector<int>& nums) {
    vector<int>stack;
    int count=0;
    for(int num:nums){
        while(!stack.empty() && stack.back()>num){
        stack.pop_back();
        }
    if(num>0 &&(stack.empty()|| stack.back()<num)){
        stack.push_back(num);
        count++;
    }
    }
    return count;
    }
};