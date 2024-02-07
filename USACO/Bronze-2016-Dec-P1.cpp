#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	int x1,y1,x2,y2;
	int X1,Y1,X2,Y2;

	cin >> x1 >> y1 >> x2 >> y2;
	cin >> X1 >> Y1 >> X2 >> Y2;

	int num1, num2; 
	num1 = max(y2, Y2) - min(y1, Y1);
	num2 = max(x2, X2) - min(x1, X1);
		
	cout << pow(max(num1,num2),2);

	return 0;
}
