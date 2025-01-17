class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xorsum=0;
        for(int num:derived){
            xorsum^=num;
        }
        return xorsum==0;
    }
};