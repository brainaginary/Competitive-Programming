#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int 

int merge(vector<int>& arr, int left, int mid, int right) {
    int inversions = 0;

    vector<int> L(mid - left + 1);
    vector<int> R(right - mid);

    for (uint i = 0; i < L.size(); ++i)
        L[i] = arr[left + i];
    for (uint j = 0; j < R.size(); ++j)
        R[j] = arr[mid + 1 + j];

	// define and fill the left and right subarrays

    uint i = 0, j = 0;
	int k = left;
	
	// merge the two arrays
    while (i < L.size() && j < R.size()) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            inversions += (mid - left + 1) - i; // Count inversions
			// if R[j] < L[i], need to swap them until L is before R
        }
    }

	// copy any remaining elemnts of L and R to the array
    while (i < L.size())
        arr[k++] = L[i++];

    while (j < R.size())
        arr[k++] = R[j++];

    return inversions;
}

int mergeSort(vector<int>& arr, int left, int right) {
    int inversions = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        inversions += mergeSort(arr, left, mid);
        inversions += mergeSort(arr, mid + 1, right);
        inversions += merge(arr, left, mid, right);
    }
    return inversions;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 

	int n; 
	cin >> n;
	vector<int> nums(n);

	for (int i=0; i<n; i++) {
		cin >> nums[i];
	}

	// algorithm starts here
	
	cout << mergeSort(nums, 0, n-1);
	
	return 0;
}
