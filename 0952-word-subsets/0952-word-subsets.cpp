class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>maxfreq(26,0);
        for(string word: words2){
            vector<int>freq(26,0);
            for(char c : word)
            freq[c - 'a']++;
            for(int i=0; i<26; i++)
            maxfreq[i]=max(maxfreq[i],freq[i]);
        }
        vector<string>answer;
        for(string word: words1){
            vector<int>freq(26,0);
            for(char c: word)
            freq[c - 'a']++;

        bool Isuniversal=true;
        for(int i=0; i<26; i++){
            if(freq[i]<maxfreq[i]){
            Isuniversal=false;
            break;
        }
        }
        if(Isuniversal) answer.push_back(word);
        }
        return answer;
    }
};