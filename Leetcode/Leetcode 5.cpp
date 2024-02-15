class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string ans;
        for (int i=0; i<n; i++) {
            int curr = 1;
            int dist = i;
            for (int j=1; j<=i; j++) {
                if (s[i-j]!=s[i+j]) {
                    dist = j-1;
                    break;
                } 
            }
            string cand = s.substr(i-dist,2*dist+1);
            if (cand.length()>ans.length()){
                ans = cand;
            }
        }

        for (int i=0; i<n-1; i++) {
            if (s[i]==s[i+1]){
                int dist = i;
                for (int j=1; j<=i; j++) {
                    if (s[i-j]!=s[i+1+j]) {
                        dist = j-1;
                        break;
                    } 
                }
                string cand = s.substr(i-dist,2*(dist+1));
                if (cand.length()>ans.length()){
                    ans = cand;
                }
            }
        }

        return ans;
    }
};
