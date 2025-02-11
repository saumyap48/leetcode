class Solution {
public:
    bool isPerfectSquare(long long num) {
        long long s=0,e=num;
        long long mid=s+(e-s)/2;
        while(s<=e){
            if(mid*mid==num) return true;
            else if(mid*mid>num){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return false;
    }
};