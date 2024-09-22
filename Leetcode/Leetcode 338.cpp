class Solution {
public:

    vector<int> countBits(int n) {
        vector <int> ans;
        for (int i = 0; i <= n; i++){
            int pop = 0;
            int n = i;
            if (n == 0){
                ans.push_back(0);
            } else if (n==1){
                ans.push_back(1);
            } else {
                while (n > 1){
                    if (n%2 == 1) pop++;
                    n /= 2;
                }
                ans.push_back(pop + 1);
            }
        }
        return ans;
    }
};
