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
	
	int N,M;
	cin >> N >> M;
	vector<vector<pi>> adj(N+1);

	for (int i=1; i<=M; i++) {
		int a,b,c;
		cin >> a >> b >> c;
		adj[a].push_back({b,c});
		adj[b].push_back({a,c});
	}

	vector<int> at_least(N+1);

	for (int i=1; i<=N; i++) {
		for (auto p : adj[i]) {
			int weight = p.second;
			at_least[i] = max(at_least[i],weight);
		}
	}

	for (int i=1; i<=N; i++) {
		(at_least[i]!=0)? cout << at_least[i] << " " : cout << 1 << " ";
	}

	return 0;
}
