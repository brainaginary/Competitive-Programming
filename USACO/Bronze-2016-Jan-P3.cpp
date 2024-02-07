#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int tiles[2001][2001] = {};
int a = 1001;
// tiles[a][a] is the origin

int main() {
	freopen("mowing.in", "r", stdin);
	freopen("mowing.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	int N; 
	cin >> N;

	pair<int,int> curr = {a,a};
	int t=0;

	int ans = INT_MAX;

	for (int i=0; i<N; i++){
		char dir; int steps;
		cin >> dir >> steps;

		if (dir=='N'){
			for (int j=0; j<steps; j++){
				t++;
				curr.second++;
				int last_time = tiles[curr.first][curr.second];
				tiles[curr.first][curr.second] = t;
				
				if (last_time!=0) {
					ans = min(ans, t-last_time);
					// cout << ans << endl;
				}
				else if (last_time==0 && curr.first==a && curr.second==a) {
					ans = min(ans,t);
				}
			}
		}	
		if (dir=='S'){
			for (int j=0; j<steps; j++){
				t++;
				curr.second--;
				int last_time = tiles[curr.first][curr.second];
				tiles[curr.first][curr.second] = t;
				
				if (last_time!=0) {
					ans = min(ans, t-last_time);
				}
				else if (last_time==0 && curr.first==a && curr.second==a) {
					ans = min(ans,t);
				}
			}
		}	
		if (dir=='E'){
			for (int j=0; j<steps; j++){
				t++;
				curr.first++;
				int last_time = tiles[curr.first][curr.second];
				tiles[curr.first][curr.second] = t;
				
				if (last_time!=0) {
					ans = min(ans, t-last_time);
				}
				else if (last_time==0 && curr.first==a && curr.second==a) {
					ans = min(ans,t);
				}
			}
		}	
		if (dir=='W'){ 
			for (int j=0; j<steps; j++){
				t++; 
				curr.first--;
				int last_time = tiles[curr.first][curr.second];
				tiles[curr.first][curr.second] = t; 
				
				if (last_time!=0) {
					ans = min(ans, t-last_time);
				}
				else if (last_time==0 && curr.first==a && curr.second==a) {
					ans = min(ans,t);
				}
			}
		}
	}

	(ans == INT_MAX)? cout << -1 : cout << ans;
	
	return 0;
}
