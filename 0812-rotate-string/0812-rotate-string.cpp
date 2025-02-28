class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.size()!=goal.size())
       return 0; 
       else
        return (s+s).find(goal)!=-1;
    }
};