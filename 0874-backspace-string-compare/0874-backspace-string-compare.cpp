class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>ts;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='#')
            st.push(s[i]);
            else if(!st.empty()){
            st.pop();
            }
        }
        for(int i=0; i<t.size(); i++){
            if(t[i]!='#')
            ts.push(t[i]);
            else if(!ts.empty()){
            ts.pop();
            }
        }
        return st==ts;
    }
};