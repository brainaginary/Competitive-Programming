#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 

	int n; 
	cin >> n;
	vector<int> nums(n);
	
	int minimum = INT_MAX;
	int maximum = INT_MIN;
	for (int i=0; i<n; i++) {
		cin >> nums[i];
		minimum = min(minimum,nums[i]);
		maximum = max(maximum,nums[i]);
	}

	// create a frequency table
	vector<int> f(maximum-minimum+1,0); // f(i) counts the number of appearances of i+min
	// fill in the frequency table and process (prefix sum)
	for (int i=0; i<n; i++) {
		f[nums[i]-minimum]++;
	}
	for (int i=1; i<=maximum-minimum; i++){
		f[i] += f[i-1];
	}
	
	// construct the sorted array directly
	vector<int> nums_sorted(n);
	for (int i=0; i<n; i++) {
		nums_sorted[f[nums[i]-minimum]-1] = nums[i];
		f[nums[i]-minimum]--;
	}

	for (int i=0; i<n; i++) {
		cout << nums_sorted[i] << " ";
	}

	return 0;
}
