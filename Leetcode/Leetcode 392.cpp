class Solution {
public:
    bool isSubsequence(string s, string t){
        bool scan_found = false;
        bool ans = true;
        int n= t.length();
        int m= s.length();
        int ptr = 0;
        for (int i = 0; i<m; i++){
            for (int j = ptr; j<n; j++){
                if (t[j]==s[i]){
                    scan_found = true;
                    ptr = j+1;
                    break;
                }
            } if (scan_found == false) {
                ans = false;
                break;
            } else {
                scan_found = false;
            }
        } return ans;
    }
};
