class Solution {
public:

    int dp[2501] = {};

    int LIS(vector<int>& nums, int n){
        int cand = 1;
        for (int i=0; i<n; i++){
            if (dp[n]!=-1) return dp[n];
            else if (nums[i] < nums[n]){
                cand = max(LIS(nums,i)+1, cand);
            }
        }
        return dp[n]=cand;
    }

    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int ans = 0;
        for (int i=0; i<nums.size(); i++){
            ans = max(ans, LIS(nums,i));
        } return ans;
    }
};
