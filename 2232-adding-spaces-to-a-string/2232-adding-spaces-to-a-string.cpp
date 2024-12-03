class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
           int n=s.length();
           int m=spaces.size();
           string answer="";
           int j=0;
           for(int i=0; i<n; i++){ 
            if(j<m && i==spaces[j]){
            answer+=" ";
            j++;
           }
          answer+=s[i];
           }
      return answer;
    }
};