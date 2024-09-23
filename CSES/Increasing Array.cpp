#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define uint unsigned int 
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	int n; cin >> n;
	vector<ll> arr(n); int i;
	ll ans = 0;
 
	for (i=0;i<n;i++){
		cin >> arr[i];
	}
 
	for (i=1;i<n;i++){
		if (arr[i-1] > arr[i]) {
			ll hop = arr[i-1] - arr[i];
			ans += hop;
			arr[i] += hop;
		} else continue;
	}
	
	cout << ans;
}
 
