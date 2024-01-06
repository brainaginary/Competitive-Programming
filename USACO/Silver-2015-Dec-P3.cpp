#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int


int main() {
	freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);	
	ios::sync_with_stdio(false);
    cin.tie(nullptr); // exclude for interactive problems
	
	int N, t;
	cin >> N >> t;
	
	int dp[4][100001]={};

	for (int i=1; i<=N; i++){
		int a;
		cin >> a;
		for(int k=1; k<=3; k++){
			if (a==k) dp[k][i]=dp[k][i-1]+1;
			else {
				dp[k][i]=dp[k][i-1];
			}
		}
	}

	while (t--){
		int pos1, pos2;
		cin >> pos1 >> pos2;
		cout << dp[1][pos2]-dp[1][pos1-1] << " " 
			<< dp[2][pos2]-dp[2][pos1-1] << " " 
			<< dp[3][pos2]-dp[3][pos1-1] << "\n";
	}



    return 0;
}

