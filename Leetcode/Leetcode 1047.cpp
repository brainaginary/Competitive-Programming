class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> list;
        int n = s.size();
        for (int i=0; i<n; i++){
            if (!list.empty() && s[i]==list.top()){
                list.pop();
            } else {
                list.push(s[i]);
            }
        }

        string ans;
        while (!list.empty()){
            ans+=list.top();
            list.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};
