class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<vector<int>> filtered;
        for (int i = 0; i < restaurants.size(); i++) {
            int id = restaurants[i][0];
            int rating = restaurants[i][1];
            int isVegan = restaurants[i][2];
            int price = restaurants[i][3];
            int distance = restaurants[i][4];
            if (veganFriendly == 1 && isVegan != 1) {
                continue;  
            }
            if (price > maxPrice || distance > maxDistance) {
                continue;  
            }
            filtered.push_back(restaurants[i]);
        }
        for (int i = 0; i < filtered.size(); i++) {
            for (int j = i + 1; j < filtered.size(); j++) {
                if (filtered[i][1] < filtered[j][1] || 
                   (filtered[i][1] == filtered[j][1] && filtered[i][0] < filtered[j][0])) {
                    swap(filtered[i], filtered[j]);
                }
            }
        }
        vector<int> result;
        for (int i = 0; i < filtered.size(); i++) {
            result.push_back(filtered[i][0]);
        }

        return result;
    }
};

