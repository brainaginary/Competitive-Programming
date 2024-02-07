#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems

	int lawn_hi, lawn_lo, lawn_lef, lawn_rite;
	int food_hi, food_lo, food_lef, food_rite;

	cin >> lawn_lef >> lawn_lo >> lawn_rite >> lawn_hi;
	cin >> food_lef >> food_lo >> food_rite >> food_hi;

	int ans = (lawn_hi-lawn_lo)*(lawn_rite-lawn_lef);

	if (food_hi >= lawn_hi && food_lo <= lawn_lo){
		if (food_lef <= lawn_lef){
			if (food_rite <= lawn_rite) {
				ans = (lawn_rite - food_rite)*(lawn_hi - lawn_lo);
			} 
		}
		else if (food_rite >= lawn_rite){
			if (food_lef >= lawn_lef) {
				ans = (food_lef - lawn_lef)*(lawn_hi - lawn_lo);
			}
		} 
	}
	else if (food_rite >= lawn_rite && food_lef <= lawn_lef){
		if (food_lo <= lawn_lo){
			if (food_hi <= lawn_hi) {
				ans = (lawn_hi - food_hi)*(lawn_rite - lawn_lef);
			} 
		}
		else if (food_hi >= lawn_hi){
			if (food_lo >= lawn_lo) {
				ans = (food_lo - lawn_lo)*(lawn_rite - lawn_lef);
			}
		} 
	}

	cout << ans;

	return 0;
}
