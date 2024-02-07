class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        int n = isConnected.size();
        vector<bool> visited(n,0);

        for (int i=0; i<n; i++){
            if (!visited[i]){
                stack<int> qqu = {};
                visited[i] = true;
                qqu.push(i);
                while (!qqu.empty()){
                    int v = qqu.top();
                    qqu.pop();

                    for (int j=0; j<n; j++){
                        if (isConnected[v][j]==1 && !visited[j]){
                            qqu.push(j);
                            visited[j] = true;
                        }
                    }
                } 
                ans++;
            }
        }

        return ans;
    }
};
