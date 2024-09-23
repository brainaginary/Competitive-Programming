#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	
	int N,M;
	cin >> N >> M;

	vector<int> A(N);
	vector<int> B(M);
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}
	for (int i=0; i<M; i++) {
		cin >> B[i];
	}
	sort(B.begin(),B.end());

	for (int i=N-1; i>=0; i--) {
		if (binary_search(B.begin(),B.end(),A[i])){
			cout << A[i] << " ";
		}
	}

	
	return 0;
}
