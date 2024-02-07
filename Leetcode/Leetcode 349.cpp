class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        sort(nums2.begin(),nums2.end());
        set<int> answer;

        for (int i=0; i<n; i++){
            int target = nums1[i];
            bool found = binary_search(nums2.begin(),nums2.end(),target);
            if (found) {
                answer.insert(target);
            }
        }

        vector<int> ans;
        for (auto s : answer){
            ans.push_back(s);
        }

        return ans;
    }
};
