class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        vector<pair<int,int>>queryIndex;
        int n=queries.size();
        for(int i=0; i<n; i++){
            queryIndex.push_back({queries[i],i});
        }
        sort(queryIndex.begin(),queryIndex.end());
        vector<int>ans(n,0);
        int maxbeauty=0;
        int i=0;
        int m=items.size();
        for(auto& [query,index]: queryIndex){
            while(i<m && items[i][0]<=query){
                maxbeauty=max(maxbeauty,items[i][1]);
                i++;
            }
            ans[index]=maxbeauty;
        }
        return ans;
    }
};