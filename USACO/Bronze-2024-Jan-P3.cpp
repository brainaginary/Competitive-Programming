#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	
	ll N;
	cin >> N;

	ll ans = 0;

	vector<ll> state(N);
	for (int i=0; i<N; i++) {
		cin >> state[i];
	}
	
	vector<ll> sum(N);
	sum[0] = state[0];
	for (int i=1; i<N; i++) {
		sum[i] = state[i]-state[i-1];
	}
	vector<ll> unknowns(N);
	unknowns[0] = sum[0];
	for (int i=1; i<N; i++) {
		unknowns[i] = sum[i]-sum[i-1];
	}

	for (int i=0; i<N; i++) {
		ans += abs(unknowns[i]);
	}

	cout << ans;



	return 0;
}
