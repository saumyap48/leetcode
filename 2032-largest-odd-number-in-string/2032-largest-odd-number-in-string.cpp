class Solution {
public:
    string largestOddNumber(string s) {
    int index=-1;
    int i;
    for(i=s.length()-1; i>=0; i--){
        if((s[i]-'0')%2==1){
            index=i;
            break;
        }
    }
    i=0;
    while(i<=index && s[i]=='0')i++;
    return s.substr(i,index-i+1);
    }
};