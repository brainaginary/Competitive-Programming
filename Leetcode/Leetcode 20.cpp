class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> brackets;

        for (int i=0; i<n; i++) {
            if (!brackets.empty()){
                char top = brackets.top();
                if ((s[i]==')' && top == '(') || (s[i]==']' && top == '[') || (s[i]=='}' && top == '{')){
                    brackets.pop();
                } else {
                    brackets.push(s[i]);
                }
            } 
            else {
                brackets.push(s[i]);
            }
        }

        return brackets.empty();
    }
};
