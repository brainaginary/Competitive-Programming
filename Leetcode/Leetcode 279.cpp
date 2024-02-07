class Solution {
public:
    int dp[10001];

    int numSquares(int n) {
        dp[0] = 0;
        dp[1] = 1;
        for (int i=2; i<=n; i++) {
            int sq = 1;
            int cand = INT_MAX;
            while (i-sq*sq >= 0) {
                cand = min(cand, dp[i-sq*sq]+1);
                sq++;
            }
            dp[i] = cand;
        }

        return dp[n];
    }
};
