#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define uint unsigned int 
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	int t; cin >> t;
	while(t--){
		ll y,x;
		cin >> y >> x;
		
		ll ref = max(y,x);
		ll move = abs(x-y);
 
		//calc ref no.
		ll ref_no = ref*(ref-1) + 1;
		if (ref%2==0){
			(x > y)? cout << ref_no - move << endl : cout << ref_no + move << endl;
		} else {
			(x>y)? cout << ref_no + move << endl : cout << ref_no - move << endl;
		}
	
	}
 
}
