class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(auto itt:s){
            freq[itt]++;
        }
        priority_queue<pair<int,char>>maxheap;
        for(auto& it: freq){
            maxheap.push({it.second,it.first});
        }
        string answer="";
        while(!maxheap.empty()){
          pair<int, char> top=maxheap.top();
          maxheap.pop();
          answer.append(top.first,top.second);
        }
        return answer;
    }
};