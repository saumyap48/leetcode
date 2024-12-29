class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
            return false;
        vector<int>lastseenS(256,-1);
        vector<int>lastseenT(256,-1);
        for(int i=0; i<s.length(); i++){
            char c1=s[i];
            char c2=t[i];
        if(lastseenS[c1]!=lastseenT[c2]){
            return false;
        }
        lastseenS[s[i]]=i;
        lastseenT[t[i]]=i;
        }
        return true;
    
    }
};