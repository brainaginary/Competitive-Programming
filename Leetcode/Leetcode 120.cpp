class Solution {
public:
    int dp[201][201]={};

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        dp[0][0] = triangle[0][0];
        int currsize = 2;
        for (int i=1; i<n; i++) {
            dp[i][0]=triangle[i][0]+dp[i-1][0];
            dp[i][currsize-1]=triangle[i][currsize-1]+dp[i-1][currsize-2];
            for (int j=1; j<currsize-1; j++) {
                dp[i][j] = triangle[i][j] + min(dp[i-1][j],dp[i-1][j-1]);
            }

            currsize++;
        }

        int ans = INT_MAX;
        for (int i=0; i<n; i++){
            ans = min(ans,dp[n-1][i]);
        }

        return ans;
    }
};
