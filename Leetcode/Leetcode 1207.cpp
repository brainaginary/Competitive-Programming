class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        sort (arr.begin(), arr.end());
        vector<int> occur(n,0);
        occur[0]++;

        int index = 0;
        
        for (int i = 1; i < n; i++){
            if (arr[i]==arr[i-1]){
                occur[index]++;
            } else {
                index++;
                occur[index]++;
            }
        }

        int m = occur.size();
        
        sort (occur.begin(), occur.end());

        for (int i = 1; i < m; i++){
            if (occur[i] == occur[i-1] && occur[i]!=0){
                return false;
            }
        }

        return true;
    }
};
