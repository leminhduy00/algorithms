class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> results(candies.size(), false);
        int maxCandy = 0;
        for (auto &candy : candies) {
            maxCandy = max(candy, maxCandy);
        }

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCandy) {
                results[i] = true;
            }
        }

        return results;
    }
};