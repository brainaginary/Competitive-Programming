#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);


    int N; int i; cin >> N;

    ll sum = 0;
    int par_sum[N+1];
    par_sum[0]=0;
    ll id[N];
    for(i=0;i<N;i++){
        cin >> id[i];   
        sum += id[i]%7;
        par_sum[i+1] = sum%7;
    }

    // obtain par sums, mod7

    int ans = 0;
    int j;
    for (i=0;i<=N;i++){
        for(j=i+ans-1;j<=N;j++){
            if (par_sum[i]==par_sum[j] && j-i>ans){
                ans=j-i;
            }
        }
    } 

    cout << ans;

    //3 7 2 7

    return 0;
}
