class Solution{
public:
 int firstMissingPositive(vector<int>& nums) {
    int n=nums.size();
    set<int>present;
    for(int i=0; i<n; i++){
        present.insert(nums[i]);
    }
    int i=1;
    while(true){
        if(present.find(i)==present.end()){
            return i;
        }
        i++;
    }
    return 1;
}
};