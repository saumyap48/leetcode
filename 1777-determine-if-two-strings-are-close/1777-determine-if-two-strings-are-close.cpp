class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())return false;
       unordered_map<char,int>m1,m2;
       for(char ch:word1)m1[ch]++;
       for(char ch: word2)m2[ch]++;

        unordered_set<char>s1,s2;
        for(auto it: m1)s1.insert(it.first);
        for(auto it:m2)s2.insert(it.first);

        if(s1!=s2)return false;
        
        multiset<int>freq1,freq2;
        for(auto it:m1)freq1.insert(it.second);
        for(auto it:m2)freq2.insert(it.second);
        return freq1==freq2;
            }
};