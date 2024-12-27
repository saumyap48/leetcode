class Solution {
public:
    int compress(vector<char>& chars) {
       int n=chars.size();
       int index=0;
       int count=1;
       if(n==1){
        return n;
       }
        for(int i=1; i<=n; i++){
            if(i<n && chars[i]==chars[i-1]){
            count++;
        }
        else{
            chars[index++]=chars[i-1];
        if(count>1){
            string count1=to_string(count);
            for(int i=0; i<count1.size(); i++){
                chars[index++]=count1[i];
            }
        }
        count=1;
       }
    }
       return index;
    }
};