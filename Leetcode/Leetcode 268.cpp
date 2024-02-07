class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = -1;
        int n = nums.size();
        for (int i=0; i<n; i++){
            if (nums[i]!=i) {
                ans = i;
                break;
            }
        }

        if (ans == -1) return n;
        else return ans;
    }
};
