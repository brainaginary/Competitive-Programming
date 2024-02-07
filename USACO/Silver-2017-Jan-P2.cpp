#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int cand (vector<char> gesture, char c1, char c2) {
	int n = gesture.size();
	vector<int> ans(n,0);
	for (int i=0; i<n; i++){
		if (gesture[i]==c2) ans[0]++;
	} 

	for (int i=1; i<n; i++) {
		if (gesture[i-1]==c1){
			ans[i] = ans[i-1]+1;
		} else if (gesture[i-1]==c2) {
			ans[i] = ans[i-1]-1;
		} else {
			ans[i] = ans[i-1];
		}
	}

	sort(ans.begin(),ans.end());

	return ans[n-1];
}

int main() {
	freopen("hps.in", "r", stdin);
	freopen("hps.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	int n;
	cin >> n;
	vector<char> gesture(n);
	for (int i=0; i<n; i++){
		cin >> gesture[i];
	}

	cout << max(max(cand(gesture,'P','H'),cand(gesture,'H','P')),max(max(cand(gesture,'P','S'),cand(gesture,'S','P')), max(cand(gesture,'S','H'),cand(gesture,'H','S'))));

	return 0;
}
