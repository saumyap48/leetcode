class Solution {
public:
    int minimumOperations(vector<int>& nums) {
            int n=nums.size();
            int index=n-1;
            set<int>st;
            while(index>=0){
                if(st.find(nums[index])!=st.end())
                break;
                st.insert(nums[index]);
                index--;
            }
            return(index+3)/3;
    }
            };
       
