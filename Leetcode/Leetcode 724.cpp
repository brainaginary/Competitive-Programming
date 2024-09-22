class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot = -1;
        int n = nums.size();
        for (int i=0; i<n; i++){
            int leftSum = 0;
            int rightSum = 0;
            for (int j = 0; j<i; j++){
                leftSum += nums[j];
            } 
            for (int j = i+1; j<n ;j++){
                rightSum += nums[j];
            }
            if (rightSum == leftSum) {
                pivot = i; break;
            }
        }
        return pivot;
    }
};
