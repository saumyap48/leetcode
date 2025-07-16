class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        int answer=-1;
        while(s<=e){
        long long int mid=s+(e-s)/2;
            if(mid*mid==x){
                return mid;
                break;
            }
            else if(mid*mid<x){
                answer=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return answer;
    }
};