#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define uint unsigned int 
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
 
	ll n; cin >> n;
	ll sum = n*(n+1)/2;
	ll a;
	ll k = n-1;
 
	while (k--){
		cin >> a; sum -= a;
	} cout << sum;
 
 
	return 0;
}
