class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0;
        int r=0;
        int maxlength=0;
        unordered_map<int,int>m;
        while(r<n){
            m[fruits[r]]++;
            if(m.size()>2){
            m[fruits[l]]--;
            if(m[fruits[l]]==0)
            m.erase(fruits[l]);
            l++;
           }
            if(m.size()<=2){
            maxlength=max(maxlength,r-l+1);
            }
            r++;
        }
        return maxlength;
    }
};