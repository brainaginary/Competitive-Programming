#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define uint unsigned int 
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
 
	int n; cin >> n; int i;
	if (n==1) cout << 1;
	else if(n<=3) cout << "NO SOLUTION";
	else {
		for(i=n-1;i>0;i-=2){
			cout << i << " ";
		} for (i=n;i>0;i-=2){
			cout << i << " ";
		}
	}
}
