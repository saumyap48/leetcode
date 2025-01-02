class Solution {
public:
     bool Isvowel(char &ch){
        if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
        return true;
        return false;
     }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int Q=queries.size();
        int N=words.size();
        vector<int>answer(Q);
        vector<int>cummsum(N);
        int sum=0;
        for(int i=0; i<N; i++){
            if(Isvowel(words[i][0]) && Isvowel(words[i].back())){
                sum++;
            }
            cummsum[i]=sum;
        }
        for(int i=0; i<Q; i++){
            int l=queries[i][0];
            int r=queries[i][1];
            answer[i]=cummsum[r] - ((l > 0) ? cummsum[l-1] : 0);
        }
        return answer;
    }
};