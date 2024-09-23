#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
#include <map>
#include <vector>
using namespace std;

int main() {
    unsigned long long n; cin >> n;

	int summod4 = (n%4) * (n%4 + 1);

    if (summod4 % 4 == 0) {
        cout << "YES" << '\n';    

        vector<int> sum1 = {};
        vector<int> sum2 = {};

        unsigned long long target = n * (n+1) / 4;

		for (unsigned int i = n; i >= 1; i--) {
			if (target >= i) {
				sum1.push_back(i);
				target -= i;  
			} else {
				sum2.push_back(i);
			}
		}

        cout << sum1.size() << '\n';
        for (auto x : sum1) {
            cout << x << " ";
        }
        cout << '\n';

        cout << sum2.size() << '\n';
        for (auto x : sum2) {
            cout << x << " ";
        }
        cout << '\n';

    } else {
        cout << "NO";
    }

    return 0;
}
