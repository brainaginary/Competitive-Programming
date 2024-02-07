class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size();
        int m=arr2.size();
        sort(arr2.begin(),arr2.end());
        int ans = 0;

        for (int i=0; i<n; i++){
            int target = arr1[i];
            int hi=m-1;
            int lo=0;
            int possible = false;
            while (hi>=lo){
                int mid=(hi+lo)/2;
                if (abs(arr2[mid] - target) <= d) {
                    possible = true; 
                    break;
                } else if (arr2[mid] - target > d) {
                    hi = mid - 1;
                } else if (target - arr2[mid] > d) {
                    lo = mid + 1;
                }
            }
            if (possible) ans++;
        }

        return n-ans;
    }
};
