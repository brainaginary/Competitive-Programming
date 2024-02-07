#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("herding.in", "r", stdin);
	freopen("herding.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	vector<int> num(3);
	cin >> num[0] >> num[1] >> num[2];

	int ans_min = 0;
	int ans_max = 0;

	sort(num.begin(),num.end());

	int a = num[0];
	int b = num[1];
	int c = num[2];
	
	int smallest_gap = min(b-a,c-b);
	int largest_gap= max(b-a,c-b);

	// get min
	if (smallest_gap >= 3) ans_min = 2;
	else if (smallest_gap == 2) ans_min = 1;
	else {
		if (b-a==1 && c-b==1) ans_min = 0;
		else {
			if (largest_gap==2) ans_min = 1;
			if (largest_gap >= 3) ans_min = 2;
		}
	}

	ans_max = largest_gap-1;

	cout << ans_min << endl << ans_max;

		
	return 0;
}
