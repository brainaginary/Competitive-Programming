class Solution {
public:
    int dp[10001];

    int coinChange(vector<int>& coins, int amount) {
        fill(dp, dp + amount + 1, INT_MAX);
        dp[0] = 0;
        for (int i=1; i<=amount; i++){
            for (auto c : coins){
                if (c <= i && dp[i-c] != INT_MAX)
                    dp[i] = min(dp[i], 1 + dp[i-c]);
            }
        }

        return (dp[amount] == INT_MAX)? -1 : dp[amount];
    }
};
