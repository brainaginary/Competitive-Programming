class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int> qu;
        for (int i=0; i<n; i++) {
            qu.push(nums[i]);
        }

        for (int i=0; i<k-1; i++) {
            if (!qu.empty()) qu.pop();
        }

        return qu.top();
    }
};
