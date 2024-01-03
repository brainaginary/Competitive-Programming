#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

bool order(pair<int,int> p1, pair<int,int> p2){
	return (p1.first < p2.first);
}

int main() {
	// For file i/o, change the input and output files accordingly
	freopen("cowqueue.in", "r", stdin);
	freopen("cowqueue.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); //exclude for interactive problems
	
	int N;
	cin >> N;

	int time = 0;
	int processed = 0;
	
	vector <pair<int,int>> timeslots(N);
	for (int i=0; i<N; i++){
		cin >> timeslots[i].first >> timeslots[i].second;
	}

	sort(timeslots.begin(), timeslots.end(), order);

	while (processed < N){
		if (time < timeslots[processed].first){
			int wait = timeslots[processed].first - time;
			time += wait + timeslots[processed].second;
		} else {
			time += timeslots[processed].second;
		}
		processed++;
	}
	
	cout << time;
	
	return 0;
}
