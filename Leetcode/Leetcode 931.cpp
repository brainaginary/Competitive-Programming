class Solution {
public:
    int dp[101][101];
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for (int i=0; i<m; i++) {
            dp[0][i] = matrix[0][i];
        }

        for (int i=1; i<n; i++) {
            dp[i][0] = matrix[i][0]+min(dp[i-1][0],dp[i-1][1]);
            dp[i][m-1] = matrix[i][m-1]+min(dp[i-1][m-1],dp[i-1][m-2]);
            for (int j=1; j<m-1; j++) {
                dp[i][j] = matrix[i][j]+min(min(dp[i-1][j],dp[i-1][j-1]),dp[i-1][j+1]);
            }
        }

        int ans = INT_MAX;
        for (int i=0; i<m; i++){
            ans = min(ans,dp[n-1][i]);
        }

        return ans;
    }
};
