#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	vector<int> po2 = {1,2,4,8,16,32,64,128,256,512,1024,2048};

	int x,y; 
	cin >> x >> y;

	int distance = y-x;
	int ans = 0;

	if (distance == 0){
		ans = 0;
	} else if (distance > 0){
		int index = 0;
		int diff = 0;
		for (int i=0; i<=5; i++){
			if (distance <= po2[2*i]){
				index = 2*i;
				diff = po2[index] - distance;
				break;
			}
		} 
		
		ans = 2*(po2[index] - 1) + po2[index] - diff;
	} else {
		int index = 0;
		int diff = 0;
		for (int i=0; i<=5; i++){
			if (abs(distance) <= po2[2*i+1]){
				index = 2*i+1;
				diff = po2[2*i+1] + distance; // since distance is negative
				break;
			}
		} 
		
		ans = 2*(po2[index] - 1) + po2[index] - diff;
	}

	cout << ans;

	return 0;
}
