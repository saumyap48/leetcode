class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int p=t.size();
        int r=0;
        int l=0;
        int sIndex=-1;
        int count=0;
        int minlength=INT_MAX;
        unordered_map<char,int>m;
        for(int i=0; i<p; i++)
            m[t[i]]++;
            while(r<s.size()){
                if(m[s[r]]>=1)
                count=count+1;
                m[s[r]]--;
                while(count==p){
                    if(r-l+1<minlength)
                    {
                    sIndex=l;
                    minlength=r-l+1;
                }
                    m[s[l]]++;
                    if(m[s[l]]>=1)
                    count=count-1;
                l++;
              }
              r++;
}
    if(minlength==INT_MAX)return "";
    else return s.substr(sIndex,minlength);
    }
};