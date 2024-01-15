#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	int N; 
	cin >> N;

	vector<pair<int,int>> shuffle(N+1);
	vector<int> before(N+1);
	vector<int> after(N+1);

	for(int i=1; i<=N; i++){
		int temp;
		cin >> temp;
		shuffle[i] = {temp,i};
	}
	for(int i=1; i<=N; i++){
		cin >> before[i];
	}

	sort(shuffle.begin(),shuffle.end());

	for (int i=0; i<3; i++){
		for (int j=1; j<=N; j++){
			after[shuffle[j].second]= before[j];		
		} before = after;
	}

	for (int i=1; i<=N; i++){
		cout << before[i] << endl;
	}
	
	return 0;
}
