class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>>answer(n,vector<int>(n,0));
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=n-1;
    int count=1;
    while(minr<=maxr && minc<=maxc){
        for(int i=minc; i<=maxc; i++){
           answer[minr][i]=count++;
        }
        minr++;

         for(int i=minr; i<=maxr; i++){
           answer[i][maxc]=count++;
        }
        maxc--;
       
        if(minr<=maxr){
         for(int i=maxc; i>=minc; i--){
           answer[maxr][i]=count++;
        }
        maxr--;
        }
         if(minc<=maxc){
         for(int i=maxr; i>=minr; i--){
           answer[i][minc]=count++;
        }
        minc++;
         }
    }
    return answer;
    }
};