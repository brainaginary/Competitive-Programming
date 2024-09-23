class Solution {
public:
    int specialValues(int n) {
        return n*pow(10,n-1);
    }

    int countDigitOne(int n) {
        if (n==0) return 0;
        if (n < 10) return 1;

        string s = to_string(n);
        int len = s.size();
        string s1 = s.substr(1,len-1);
        
        if (s[0] == '1') {
            return (stoi(s1)+1) + specialValues(len-1) + countDigitOne(stoi(s1));
        } else {
            return (s[0]-'0')*specialValues(len-1) + pow(10,len-1) + countDigitOne(stoi(s1));
        }
    }
};
