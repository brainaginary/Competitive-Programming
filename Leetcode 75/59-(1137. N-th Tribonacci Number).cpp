class Solution {
public:
    int tribonacci(int n) {

        if (n==0) return 0;
        if (n==1 || n==2) return 1;

        int memo1 = 1; int memo2 = 1; int memo3 = 0;
        int mem1, mem2, mem3;
        int i; int f;
        for (i=2;i<n;i++){
            f = memo1 + memo2 + memo3;
            mem1 = memo1;
            mem2 = memo2;
            mem3 = memo3;
            // maybe i shldhv just used pointers
            memo1 = f;
            memo2 = mem1;
            memo3 = mem2;
        } return memo1;
    }
};
