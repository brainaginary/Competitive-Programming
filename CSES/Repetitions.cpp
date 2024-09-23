#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define uint unsigned int 
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	string s; cin >> s;
	int max_len = 0;
	int n = s.length();
	
	int cand=0;
	int i,j;
	for(i=0;i<n;i++){
		for (j=i;j<n;j++){
			if (s[i] == s[j]){
				cand ++;
			} else break;
		}
		max_len = max(max_len,cand);
		i += cand-1;
		cand = 0;
	} 
 
	cout << max_len;
 
}
