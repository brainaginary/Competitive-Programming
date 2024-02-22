#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define uint unsigned int
#define ull unsigned long long
#define pi pair<int,int>
#define pll pair<long long,long long>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

  // N: number of weights
  // W: max weight
  // w,v: weight and its value
	
	int N,W;
	cin >> N >> W;
	vector<ll> w(N+1);
	vector<ll> v(N+1);
	for(int i=1; i<=N; i++) {
		cin >> w[i] >> v[i];
	}

	vector<vector<ll>> dp(N+1, vector<ll> (W+1));
	for (int i=0; i<=W; i++) {
		dp[0][i] = 0;
	}

	// do dp
	
	
	for (int i=1; i<=N; i++) {
		int curr_w = w[i];
		int curr_v = v[i];
		for (int j=0; j<=W; j++) {
			if (curr_w > j) {
				dp[i][j] = max(0LL,dp[i-1][j]);
			} else {
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-curr_w]+curr_v);
			}
		}
	}

	cout << dp[N][W];

	return 0;
}
