#include <bits/stdc++.h>
#include <ios>
#include <string>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	// For file i/o, change the input and output files accordingly
	freopen("angry.in", "r", stdin);
	freopen("angry.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	int N; cin >> N;
	vector<int> v(N);
	for (int i=0; i<N; i++){
		cin >> v[i];
	}

	sort(v.begin(),v.end());

	int max = 0;
	for (int i=0; i<N; i++){
		int ans = 0;
		int radius = 1;
		for (int k=i; k>0; k--){
			if (v[k]-v[k-1] <= radius) {
				int simultaneous = 1;
				for (int j=k-2; j>=0; j--){
					if (v[k] - v[j] <= radius) {
						simultaneous++;
					} else break;
				}
				ans+=simultaneous;
				k -= simultaneous-1; 
				radius++;
			} else break;
		}
		radius = 1;
		for (int k=i; k<N-1; k++){
			if (v[k+1]-v[k] <= radius) {
				int simultaneous = 1;
				for (int j=k+2; j<N; j++){
					if (v[j] - v[k] <= radius) {
						simultaneous++;
					} else break;
				}
				ans+=simultaneous;
				k += simultaneous-1; 
				radius++;
			} else break;
		}
		if (ans+1 > max) max = ans + 1;
	} 
	cout << max;

	return 0;
}
