class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int sum=0;
        while(left<right){
            left>>=1;
            right>>=1;
            sum++;
        }
        return (left<<sum);
    }
};