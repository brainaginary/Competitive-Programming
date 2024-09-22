class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans1;
        vector<int> ans2;
        vector<bool> add1(n, true);
        vector<bool> add2(m, true);
        set<int> anset1;
        set<int> anset2;

        for (int i=0 ; i<n; i++){
            for (int j=0; j<m; j++){
                if (nums1[i] == nums2[j]){
                    add1[i] = false;
                    add2[j] = false;
                }
            }
        } 

        for (int i=0; i<n ;i++){
            if (add1[i] == true) {
                anset1.insert(nums1[i]);
            }
        } 

        for (int i=0; i<m ;i++){
            if (add2[i] == true) {
                anset2.insert(nums2[i]);
            }
        }

        for (auto k : anset1){
            ans1.push_back(k);
        } for (auto k : anset2){
            ans2.push_back(k);
        }

        vector<vector<int>> answer = {ans1, ans2};

        return answer;
    }
};
