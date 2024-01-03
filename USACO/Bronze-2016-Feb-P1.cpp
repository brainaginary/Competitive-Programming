#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	int X, Y, M;
	cin >> X >> Y >> M;

	int max_X = M/X;
	int max_Y = M/Y;
	int cand = 0;

	for (int i = 0; i<= max_X ; i++){
		for (int j = 0; j<= max_Y ; j++){
			int curr = X*i + Y*j;
			if (curr <= M && cand < curr){
				cand = curr;
			}	
		}
	}

	cout << cand;
	return 0;
}
