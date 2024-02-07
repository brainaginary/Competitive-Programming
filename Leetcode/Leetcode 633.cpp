class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c%4==3) return false;
        else {
            long long a = 0;
            while (pow(a,2) <= c){
                long long target = c - pow(a,2);
                long long hi = INT_MAX;
                long long lo = 0;
                while (hi >= lo) {
                    long long mid = (hi+lo)/2;
                    if (pow(mid,2) == target) return true;
                    else if (pow(mid,2) < target && pow(mid+1,2) > target){
                        break;
                    } else if (pow(mid,2) < target){
                        lo = mid+1;
                    } else {
                        hi = mid-1;
                    }
                }
                a++;
            }

            return false;
        }
    }
};
