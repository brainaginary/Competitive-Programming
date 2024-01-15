#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
					  
	int M,N,K;
	cin >> M >> N >> K;

	for (int i=0; i<M; i++){
		string s;
		cin >> s;
		
		string mod = "";
		for (int j=0; j<N; j++){
			for (int q=0; q<K; q++) mod += s[j];
		} for (int j=0; j<K; j++) cout << mod << endl;
	}


	return 0;
}
