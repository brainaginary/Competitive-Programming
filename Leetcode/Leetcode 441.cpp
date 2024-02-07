class Solution {
public:
    long long tri(long long n){
        return (n*(n+1))/2;
    }

    int arrangeCoins(int n) {

        long long en = n;
        int hi = 2e9;
        int lo = 0;
        while(hi>=lo){
            int mid = lo + (hi-lo)/2;
            if (en>=tri(mid) && en<tri(mid+1)){
                return mid;
            } else if (en < tri(mid)){
                hi = mid-1;
            } else if (en >= tri(mid+1)) {
                lo = mid+1;
            }
        }

        return 0;
    }
};
