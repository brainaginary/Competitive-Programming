class Solution {
public:
    int guessNumber(int n) {
        int lo = 0;
        int hi = n;
        while (lo <= hi) {
            int mid = lo + (hi - lo)/2;
            int pick = guess(mid);
            if (pick == 0){
                return mid;
            } else if (pick == -1){
                hi = mid - 1;
            } else if (pick == 1){
                lo = mid + 1;
            }
        }

        return 0;
    }
};
