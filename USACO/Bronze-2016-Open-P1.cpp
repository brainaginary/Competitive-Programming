#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	int ans = 0;

	int N, K;
	cin >> N >> K;
	vector<int> size(N);
	for (int i = 0; i< N; i++){
		cin >> size[i];
	}

	sort(size.begin(), size.end());
	
	for (int i = 0 ; i<N; i++){
		int endby = size[i] + K;
		for (int j = i+1; j<N; j++){
			if (size[j] > endby) {
				if (j-i > ans) ans = j-i;
				break;
			} else if (j==N-1) {
				if (ans < j - i + 1){
					ans = j - i + 1;
				}
				break;
			}
		}
	}

	cout << ans;

	return 0;
}
