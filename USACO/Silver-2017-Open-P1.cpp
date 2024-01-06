#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int


int main() {
	freopen("pairup.in", "r", stdin);
	freopen("pairup.out", "w", stdout);	
	ios::sync_with_stdio(false);
    cin.tie(nullptr); // exclude for interactive problems
	
	int N; cin >> N;
	vector<pair <int,int>> v;

	for (int i=0; i<N; i++){
		int num, time;
		cin >> num >> time;
		v.push_back({time, num});
	}

	int ptr1 = 0, ptr2 = N-1;

	sort(v.begin(),v.end());
	
	int ans = 0;
	while (ptr2 > ptr1){
		int skip = min(v[ptr1].second, v[ptr2].second);
		int cand = v[ptr1].first + v[ptr2].first;
		ans = max(ans, cand);
		v[ptr1].second -= skip;
		v[ptr2].second -= skip;
		if (v[ptr1].second == 0) ptr1++;
		if (v[ptr2].second == 0) ptr2--;
	}

	cout << ans;
    return 0;
}

