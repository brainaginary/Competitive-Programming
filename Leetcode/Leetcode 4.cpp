class Solution {
public:
    double findMedianSortedArrays(vector<int> nums1, vector<int> nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> nums = nums1;
        for (int i=0; i<n; i++) {
            nums.push_back(nums2[i]);
        }

        sort(nums.begin(),nums.end());
        if ((m+n)%2 == 1){
            return nums[(m+n)/2];
        } else {
            return (double) (nums[(m+n)/2] + nums[(m+n-1)/2])/2;
        }
    }
};
