#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

vector<int> pour(vector<int> state,int p,int q,int r,int index){
	vector<int> ans;
	int a = state[0];
	int b = state[1];
	int c = state[2];

	if (index%3==1){
		if (q-b>=a){
			ans = {0,a+b,c};
		}
		else {
			ans = {a - (q - b), q, c};
		}
	}	
	else if (index%3==2){
		if (r-c>=b){
			ans = {a,0,b+c};
		}
		else {
			ans = {a,b-(r-c),r};
		}
	}	
	else {
		if (p-a>=c){
			ans = {a+c,b,0};
		}
		else {
			ans = {p,b,c-(p-a)};
		}
	}	

	return ans;
}

int main() {
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	int p,q,r;
	int a,b,c;
	cin >> p >> a >> q >> b >> r >> c;
	
	vector<int> ans = {a,b,c};
	for(int i=1; i<=100; i++) {
		ans = pour(ans,p,q,r,i);
	}

	for (int i=0; i<3; i++){
		cout << ans[i] << endl;
	}

	return 0;
}
