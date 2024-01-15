#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	//freopen("swap.in", "r", stdin);
	//freopen("swap.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	int N; cin >> N;
	vector<int> h(N);
	for (int i=0; i<N; i++){
		cin >> h[i];
	}

	vector<int> dp(N+1);
	
	dp[2] = abs(h[1]-h[0]);
	dp[3] = abs(h[2]-h[0]);
	for (int i=4; i<=N; i++){
		dp[i] = min(dp[i-1] + abs(h[i-1] - h[i-2]),dp[i-2] + abs(h[i-1] - h[i-3]));
	}

	cout << dp[N];

	return 0;
}
