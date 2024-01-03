#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	// For file i/o, change the input and output files accordingly
	//freopen("cowqueue.in", "r", stdin);
	//freopen("cowqueue.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	ll N;
	cin >> N;

	ll max=0;
	ll fee = 0;
	
	vector<ll> c(N);
	for (int i=0; i<N; i++){
		cin >> c[i];
	}

	sort(c.begin(),c.end());

	for (int i=0; i<N; i++){
		if (c[i] == c[i-1] && i > 0) continue;
		ll income = c[i]*(N-i);
		if (income > max) { // this has to be a strict inequality
			max = income;
			fee = c[i];
		}
	}

	cout << max << " " << fee;
	return 0;
} 
