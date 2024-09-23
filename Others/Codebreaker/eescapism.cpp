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
	
	int N;
	cin >> N;

	ll ans = 0;
	ll MOD = 1e9+7;
	
	/*
	priority_queue<ll> greedy;
	
	for (int i=0; i<N; i++) {
		ll a;
		cin >> a;
		greedy.push(a);
	}

	while (!greedy.empty()) {
		ll curr = greedy.top();
		greedy.pop();
		if (curr-1>0) {
			greedy.push(curr-1);
			ans += curr % MOD;
			ans %= MOD;
		} else if (curr==1) {
			ans = (ans+1) % MOD;
		}
	}
	*/
	// actually, dont need greedy...
	
	vector<ll> greedy(N);
	for (int i=0; i<N; i++) {
		cin >> greedy[i];
	}

	for (int i=0; i<N; i++) {
		ll curr = greedy[i];
		ans += ((curr*(curr+1))/2) % MOD;
		ans %= MOD;
	}
	
	cout << ans;

	return 0;
}
