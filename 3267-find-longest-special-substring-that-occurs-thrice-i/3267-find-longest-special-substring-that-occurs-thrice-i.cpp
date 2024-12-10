class Solution {
public:
    int maximumLength(string s) {
        int n=s.length();
        map<string,int>mp;
        for(int i=0; i<n; i++){
            string curr;
            for(int j=i; j<n; j++){
                if(curr.empty() || curr.back()==s[j]){
                    curr.push_back(s[j]);
                    mp[curr]++;
                }else{
                    break;
                }
            }
        }
        int answer=0;
        for(auto&it :mp){
            string str=it.first;
            int count=it.second;
            if(count>=3 && str.length()>answer){
                answer=str.length();
            }
        }
        return answer==0? -1: answer;
    }
};