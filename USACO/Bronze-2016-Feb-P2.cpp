#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int distance (int start, int target, int rooms){
	if (target < start) {
		return rooms-(start-target);
	} 
	else if (target==start) 
		return 0;
	else {
		return target-start;
	}
}

int main() {
	freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
		
	int n; 
	cin >> n;
	vector<int> cows(n+1);
	int ans = INT_MAX;

	for (int i=1; i<=n; i++){
		cin >> cows[i];
	}

	for (int i=1; i<=n; i++){
		int cand = 0;
		for (int j=1; j<=n; j++){
			int dist = distance(i,j,n);
			cand += dist*cows[j];
		}
		ans = min(cand,ans);
	}

	cout << ans;

	
	return 0;
}
