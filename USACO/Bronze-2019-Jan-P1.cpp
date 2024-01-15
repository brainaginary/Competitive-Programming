#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int swapper(int a, int b, int shell_loc){
	if (shell_loc == a) shell_loc = b;
	else if (shell_loc == b) shell_loc = a;

	return shell_loc;
}

int main() {
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	int N; cin >> N;
	vector<int> shell(N);

	for(int i=1; i<=N; i++){
		shell[i-1] = i;
	}
	vector<int> cand(N);

	for (int i=0; i<N; i++){
		int a,b,guess; cin >> a >> b >> guess;
		for (int j=0; j<N; j++){
			shell[j] = swapper(a,b,shell[j]);
			if (shell[j]==guess) cand[j]++;
		}
	}

	sort(cand.begin(),cand.end());

	cout << cand[N-1];

	return 0;
}
