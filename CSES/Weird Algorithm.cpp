#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define uint unsigned int 
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
 
	ll n;
	cin >> n;
 
	cout << n << " ";
 
	while (n!=1){
		if(n%2==1) n = n*3 + 1;
		else n = n/2;
		cout << " " << n << " ";
	}	
	
	return 0;
}
