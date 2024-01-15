#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int new_index(int i, int a1, int a2, int b1, int b2){
	if (i<=a2 && i>=a1){
		i = a1 + a2 - i;
	} 
	if (i<=b2 && i>=b1){
		i = b1 + b2 - i;
	}

	return i;
}

int main() {
	freopen("swap.in", "r", stdin);
	freopen("swap.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
					
	int N, K; 
	cin >> N >> K;
	
	int a1,a2,b1,b2;
	cin >> a1 >> a2 >> b1 >> b2;
	vector<pair<int,int>> pos(N);
	
	for(int i=1; i<=N; i++) {
		int period = 1;
		int n = i;
		vector<int> residues = {i};
		while (new_index(n,a1,a2,b1,b2)!=i){
			period++;
			n = new_index(n, a1, a2, b1, b2);
			residues.push_back(n);
		}
		int rem = K%period;
		pos[i-1] = {residues[rem],i};
	}

	sort(pos.begin(),pos.end());

	for (auto v : pos){
		cout << v.second << endl;
	}




	return 0;
}
