class Solution {
public:
   void func(int index,string digits,string s,vector<string>&answer,string combos[]){
        if(index==digits.size()){
            answer.push_back(s);
            return;
        }
        int digit=digits[index]-'0';
        for(int i=0; i<combos[digit].size();i++){
            func(index+1,digits,s+combos[digit][i],answer,combos);
        }
    }
    vector<string> letterCombinations(string digits) {
             if (digits.empty()) return {}; 
               string combos[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>answer;
        string s="";
        func(0,digits,s,answer,combos);
        return answer;
    }
};