#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	//freopen("swap.in", "r", stdin);
	//freopen("swap.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	int N,K; cin >> N >> K;
	vector<int> h(N);
	for (int i=0; i<N; i++){
		cin >> h[i];
	}

	vector<int> dp(N+1);
	
	for (int i=2; i<=K+1; i++){
		dp[i] = abs(h[i-1]-h[0]);
	}

	for (int i=K+2; i<=N; i++){
		dp[i] = dp[i-1] + abs(h[i-1] - h[i-2]);
		for (int j=2; j<=K; j++){
			dp[i] = min(dp[i], dp[i-j] + abs(h[i-1]-h[i-(j+1)]));
		}
	}

	cout << dp[N];

	return 0;
}
