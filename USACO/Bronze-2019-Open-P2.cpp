#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int outgoing_edges(vector<pair<int,int>> &edges, int vertex){
	int n = edges.size();
	int ans=0;

	for (int i=0; i<n; i++){
		if (edges[i].first==vertex){
			ans++;
		}
	}

	return ans;
}

// returns the number of outgoing edges

int main() {
	freopen("factory.in", "r", stdin);
	freopen("factory.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	int N;
	cin >> N;
	vector<pair<int,int>> edges(N-1);
	
	for(int i=0; i<N-1; i++){
		int a,b;
		cin >> a >> b;
	
		edges[i] = {a,b};
	}

	int ans = 0;
	bool ans_yet = false;

	for (int i=1; i<N; i++){
		bool cand = true;
		for (int j=1; j<N; j++){
			if (j!=i && j<=N-2){
				if (outgoing_edges(edges,j)!=1) {
					cand = false;
					break;
				}
			} 
			else if(j==i){
				if (outgoing_edges(edges,j)!=0) {
					cand = false;
					break;
				}
			}
		} 
		if (cand) {
			ans=i;
			ans_yet = true;
			break;
		}
	}
		
	(ans_yet)? cout << ans : cout << -1;

	return 0;
}
