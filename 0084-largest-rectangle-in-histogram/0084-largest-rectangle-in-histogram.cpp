class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>Right(n);
        vector<int>Left(n);
        stack<int>st;
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
            Right[st.top()]=i;
            st.pop();
        }
        st.push(i);
        }
        while(!st.empty()){
            Right[st.top()]=n;
            st.pop();
        }
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()]>heights[i]){
                Left[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            Left[st.top()]=-1;
            st.pop();
        }
        int ans=0;
        for(int i=0; i<n; i++)
            ans=max(ans,heights[i]*(Right[i]-Left[i]-1));
            return ans;
    }
};