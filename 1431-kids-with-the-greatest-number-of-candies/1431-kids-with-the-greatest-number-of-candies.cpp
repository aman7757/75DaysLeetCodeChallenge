class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int mx = *max_element(candies.begin(), candies.end());
        for (int x : candies)
            ans.push_back(x + extraCandies >= mx);

        return ans;
    }
};