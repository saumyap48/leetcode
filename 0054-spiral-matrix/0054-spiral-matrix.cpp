class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>answer;
       int m=mat.size();
       int n=mat[0].size();
       int totalcount=m*n;
       int minr=0;
       int maxr=m-1;
       int minc=0;
       int maxc=n-1;
       int count=0;
       while(count<totalcount){
        for(int i=minc; i<=maxc && count<totalcount; i++){
        answer.push_back(mat[minr][i]);
        count++;
        }
        minr++;
        for(int i=minr; i<=maxr&& count<totalcount; i++){
        answer.push_back(mat[i][maxc]);
        count++;
        }
        maxc--;
        for(int i=maxc; i>=minc&& count<totalcount; i--){
        answer.push_back(mat[maxr][i]);
        count++;
        }
       maxr--;
       for(int i=maxr; i>=minr&& count<totalcount; i--){
        answer.push_back(mat[i][minc]);
        count++;
        }
        minc++;
       }
       return answer;
    }
};