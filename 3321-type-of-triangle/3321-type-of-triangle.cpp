class Solution {
public:
    string triangleType(vector<int>& nums) {
        int first=nums[0];
        int second=nums[1];
        int third=nums[2];
        if(first+second>third && second+third>first && first+third>second){
        if(first==second && second==third && first==third){
            return "equilateral";
        }
          else if((first == second && second != third) || 
                (second == third && third != first) || 
                (first == third && third != second)) {
            return "isosceles";
       
         }
        else {
            return "scalene";
        }
    }
    else {
        return "none";
    }
    }
};