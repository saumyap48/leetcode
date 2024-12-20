class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char,int>mp;
    if(s.length()!=t.length())
    return false;
    for(char c: t){
        mp[c]++;
    }
    for(char c: s){
        if(mp[c]>0){
        mp[c]--;
        }
        else{
            return false;
        }
    }
    return true;
    }
};