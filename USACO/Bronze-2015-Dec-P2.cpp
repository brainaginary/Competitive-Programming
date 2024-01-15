#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	int N,M; 
	cin >> N >> M;

	vector<int> road(101);
	vector<int> bessie(101);
	int ans=0;

	int ptr1=1, ptr2=1;
	for (int i=0; i<N; i++){
		int segment; 
		int speed;
		cin >> segment >> speed;
		for (int j=ptr1; j<ptr1+segment; j++){
			road[j] = speed;
		} ptr1 += segment;
	}
	for (int i=0; i<M; i++){
		int segment; 
		int speed;
		cin >> segment >> speed;
		for (int j=ptr2; j<ptr2+segment; j++){
			bessie[j] = speed;
		} ptr2 += segment;
	}

	for (int i=1; i<=100; i++){
		ans = max(ans, bessie[i] - road[i]);
	}

	cout << ans;

	return 0;
}
