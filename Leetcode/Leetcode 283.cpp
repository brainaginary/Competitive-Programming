class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i=0; i<n; i++){
            if (nums[i]==0) {
                count++;
            }
        } 
        vector<int> pass;
        for (int i=0; i<n; i++){
            if (nums[i]!=0) {
                pass.push_back(nums[i]);
            }
        }
        nums = pass;
        while (count--){
            nums.push_back(0);
        }
    }
};
