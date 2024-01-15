#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int check(char a, char b, char c){
	if (a==b){
		if (b==c) {
			return 1;
		} else return 2;
	} 
	else if (b==c) return 3;
	else if (a==c) return 4;
	return 0;
}
// 1 means indiv win, 2 means team win
// 2,3,4 represent different teams (a,b), (b,c), (a,c)


// return (a,b)
// a=1 if indiv win else a=2
// b is the char involved
pair<int, set<char>> pass(char a, char b, char c){ 
	int first = 0;
	int ans = check(a,b,c);
	if (ans==0){
		return {0,{0}};
	} else if (ans==1){
		return {1,{a}};
	} else {
		first = 2;
		if (ans==2){
			return {first, {a,c}};
		} else if (ans==3) {
			return {first, {b,a}};
		} else return {first, {a,b}};
	}
}


int main() {
	freopen("tttt.in", "r", stdin);
	freopen("tttt.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
					  
	set<set<char>> indiv;
	set<set<char>> team;

	char ttt[4][4];

	for(int i=1; i<=3; i++){
		for (int j=1; j<=3; j++){
			cin >> ttt[i][j];
		}
	}
	
	for (int i=1; i<=3; i++){
		pair<int,set<char>> temp = pass(ttt[i][1],ttt[i][2],ttt[i][3]);
		if (temp.first == 1) indiv.insert(temp.second);
		else if (temp.first==2) team.insert(temp.second);
	}	

	for (int i=1; i<=3; i++){
		pair<int,set<char>> temp = pass(ttt[1][i],ttt[2][i],ttt[3][i]);
		if (temp.first == 1) indiv.insert(temp.second);
		else if (temp.first==2) team.insert(temp.second);
	}

	pair<int,set<char>> diag1 = pass(ttt[1][1],ttt[2][2],ttt[3][3]);
	pair<int,set<char>> diag2 = pass(ttt[3][1],ttt[2][2],ttt[1][3]);
	if (diag1.first == 1) indiv.insert(diag1.second);
	else if (diag1.first==2) team.insert(diag1.second);
	if (diag2.first == 1) indiv.insert(diag2.second);
	else if (diag2.first==2) team.insert(diag2.second);

	cout << indiv.size() << endl;
	cout << team.size();
	
	return 0;
}
