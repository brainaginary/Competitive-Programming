#include <bits/stdc++.h>
using namespace std;

int main(){
    
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);

    int N; cin >> N;

    vector<int> A[N];

    int i;
    for (i=0;i<N-1;i++){
        int a,b;
        cin >> a >> b;
        A[a-1].push_back(b-1);
        A[b-1].push_back(a-1);
    }

    int maxdeg = 0;
    for (i=0;i<N;i++){
        if (A[i].size() > maxdeg){
            maxdeg = A[i].size();
        }
    } cout << maxdeg + 1;

    return 0;
}
