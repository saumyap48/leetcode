class Solution {
private:
    /* Function to find the indices of 
    next smaller elements */
    vector<int> findNSE(vector<int> &arr) {
        
        // Size of array
        int n = arr.size();
        
        // To store the answer
        vector<int> ans(n);
        
        // Stack 
        stack<int> st;
        
        // Start traversing from the back
        for(int i = n - 1; i >= 0; i--) {
            
            // Get the current element
            int currEle = arr[i];
         
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            
            // Update the answer
            ans[i] = !st.empty() ? st.top() : n;
            
            /* Push the index of current 
            element in the stack */
            st.push(i);
        }
        
        // Return the answer
        return ans;
    }
    
    /* Function to find the indices of 
    previous smaller elements */
    vector<int> findPSE(vector<int> &arr) {
        
        // Size of array
        int n = arr.size();
        
        // To store the answer
        vector<int> ans(n);
        
        // Stack 
        stack<int> st;
        
        // Traverse on the array
        for(int i=0; i < n; i++) {
            
            // Get the current element
            int currEle = arr[i];
            
          
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            
            // Update the answer
            ans[i] = !st.empty() ? st.top() : -1;
            
           
            st.push(i);
        }
        
        // Return the answer
        return ans;
    }
    
public:
    
    // Function to find the largest rectangle area
    int largestRectangleArea(vector<int> &heights) {
        
        /* Determine the next and 
        previous smaller elements */
        vector<int> nse = findNSE(heights);
        vector<int> pse = findPSE(heights);
        
        // To store largest area
        int largestArea = 0;
        
        // To store current area
        int area;
        
        // Traverse on the array
        for(int i=0; i < heights.size(); i++) {
            
            // Calculate current area
            area = heights[i] * (nse[i] - pse[i] - 1);
            
        
            largestArea = max(largestArea, area);
        }
        
       
        return largestArea;
    }
};
