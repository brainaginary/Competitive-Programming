class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> prefix(n+1,0);
        // prefix sum processing
        int sum = 0;
        for (int i=1; i<=n; i++){
            sum += nums[i-1];
            prefix[i] = sum;
        }

        int m = queries.size();
        vector<int> answer;
        // O(log n) for each query
        for (int i=0; i<m; i++){
            int target = queries[i];
            auto it = upper_bound(prefix.begin(),prefix.end(),target);
            answer.push_back(it-prefix.begin()-1);
        }

        return answer;
    }
};
