class Solution{
public:
vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries,int x) {
    int n = nums.size();
    unordered_map<int, int> mp;
    int count = 0;
    vector<int> answer;  // New vector to store results

    // Storing occurrences of x
    for (int i = 0; i < n; i++) {
        if (nums[i] == x) {
            count++;
            mp[count] = i;
        }
    }

    // Processing queries and storing results in 'answer'
    for (int i = 0; i < queries.size(); i++) {
        if (mp.find(queries[i]) != mp.end()) {
            answer.push_back(mp[queries[i]]);
        } else {
            answer.push_back(-1);
        }
    }

    return answer;  // Return the new vector instead of modifying queries
}
};
