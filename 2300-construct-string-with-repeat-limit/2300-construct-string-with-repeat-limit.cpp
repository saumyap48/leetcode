class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int>count(26,0);
        for(char &ch :s){
            count[ch-'a']++;
        }
        priority_queue<char>pq;
        for(int i=0; i<26; i++){
            if(count[i]>0){
                char ch='a'+i;
                pq.push(ch);
            }
        }
        string answer;
        while(!pq.empty()){
            char ch =pq.top();
            pq.pop();

            int freq=min(count[ch-'a'],repeatLimit);
            answer.append(freq,ch);
            count[ch-'a']-=freq;

            if(count[ch-'a']>0 && !pq.empty()){
                char nextchar=pq.top();
                pq.pop();
                answer.push_back(nextchar);
                count[nextchar-'a']--;
                if(count[nextchar-'a']>0){
                    pq.push(nextchar);
                }
                pq.push(ch);
            }
        }
        return answer;
        
    }
};