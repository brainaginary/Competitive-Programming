class Solution {
public:
    bool canPlaceFlowers (vector<int>& flowerbed, int n) {
        
        int ans = 0;
        int size = flowerbed.size();
        
        int count_ones = 0;
        for (int i=0; i < size; i++){
            if(flowerbed[i]==1) count_ones++;
        } 

        if (count_ones == 0) return ((size+1)/2 >= n);

        vector<int> gaps(count_ones+1, 0);
        int ptr = 0;

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 1) ptr ++ ;
            else gaps[ptr]++;
        }

        bool back_one = false;
        if (flowerbed.back()==1) back_one = true;

        for (int i=0; i<=count_ones; i++){
            if (i == 0) ans += gaps[i]/2;
            else if (!back_one && i==count_ones) ans += gaps[i]/2;
            else {
                ans += max((gaps[i]-1)/2,0);
            }
        }

        return (n <= ans);
    }
};
