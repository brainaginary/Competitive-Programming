class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <int> bruh = candies;
        sort(bruh.begin(), bruh.end());
        int max = bruh.back();
        vector<bool> ans;
        for (auto v : candies){
            if (v + extraCandies >= max) ans.push_back(true);
            else ans.push_back(false);
        } 
        return ans;
    }
};
