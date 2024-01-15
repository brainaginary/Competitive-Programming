#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	vector<int> ans(26);

	int N;
	cin >> N;

	for(int i=0; i<N; i++){
		string s1,s2;
		cin >> s1 >> s2;

		int n1 = s1.length();
		int n2 = s2.length();

		vector<int> s2_letters(26);
		vector<int> s1_letters(26);

		for(int j=0; j<n1; j++){
			int index = s1[j] - 'a';
			s1_letters[index]++;
		}
		for(int j=0; j<n2; j++){
			int index = s2[j] - 'a';
			s2_letters[index]++;
		}

		for(int j=0; j<26; j++){
			ans[j] += max(s1_letters[j],s2_letters[j]);
		}
	}

	for (auto v : ans){
		cout << v << endl;
	}

	return 0;
}
