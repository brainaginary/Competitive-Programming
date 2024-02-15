class Solution {
public:
    pair<int,bool> dp[100];

    int rob(vector<int>& nums) {
        int n=nums.size();

        if (n==1) return nums[0];

        dp[0] = {nums[0],true};
        (nums[1] > nums[0])? dp[1]={nums[1],true} : dp[1]={nums[0],false};
        if (n==2) return max(dp[1].first, dp[0].first);

        for (int i=2; i<n; i++){
            pair<int,bool> cand1;
            if (!dp[i-1].second){
                cand1.first = dp[i-1].first + nums[i];
                cand1.second = true;
            } else {
                cand1.first = dp[i-1].first;
                cand1.second = false;
            }
            
            pair<int,bool> cand2 = {dp[i-2].first + nums[i],true};

            if (cand1.first > cand2.first){
                dp[i] = cand1;
            } else dp[i] = cand2;
        }

        return max(dp[n-1].first,dp[n-2].first);
    }
};
