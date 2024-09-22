class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int n = gain.size();
        int alt = 0;
        for (int i=0; i<n; i++){
            alt += gain[i];
            if (alt > ans) ans = alt;
        }
        return ans;
    }
};
