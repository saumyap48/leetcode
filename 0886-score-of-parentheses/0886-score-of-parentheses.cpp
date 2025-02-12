class Solution {
public:
    int scoreOfParentheses(string s) {
        int count=0;
        stack<int>st;
        for(char ch : s){
            if(ch=='('){
                st.push(count);
                count=0;
            }
            else{
        count=st.top()+max(1,2*count);
        st.pop();
            }
        }
        return count;
    }
};