class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        vector <pair<char,int>> str_vowels; // pair = (vowel, position)
        vector <char> vowel = {'a','e','i','o','u','A','E','I','O','U'};
        for (int i = 0; i<n; i++){
            for (auto v : vowel){
                if (s[i] == v) {
                    str_vowels.push_back({v,i});
                }
            }
        }
        
        int m = str_vowels.size();
        for (int i=0; i<m; i++){
            s[str_vowels[i].second] = str_vowels[m-1-i].first;
        }
        return s;
    }
};
