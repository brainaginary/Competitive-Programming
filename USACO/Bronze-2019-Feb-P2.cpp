#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("revegetate.in", "r", stdin);
	freopen("revegetate.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	int N,M;
	cin >> N >> M;

	vector<int> done(N+1);
	vector<vector<int>> V(N+1);

	for (int i=1; i<=M; i++){
		int a,b;
		cin >> a >> b;
		V[a].push_back(b);
		V[b].push_back(a);
	}

	for (int i=1; i<=N; i++){
		vector<int> except={};
		for (int j=1; j<=i; j++){
			if (count(V[j].begin(),V[j].end(),i)){
				except.push_back(done[j]);	
			}
		} 
		for (int k=1; k<=4; k++){
			if (!count(except.begin(),except.end(),k)){
				done[i] = k; break;
			}
		}
	}

	for (int i=1; i<=N; i++){
		cout << done[i];
	}


	return 0;
}
