class Solution {
public:
    int findClosest(int x, int y, int z) {
        int position1=abs(x-z);
        int position2=abs(y-z);
        if(position1<position2){
            return 1;
        }else if(position1==position2){
            return 0;
        }
        else{
            return 2;
        }
    }
};