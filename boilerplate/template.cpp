#include <iostream>  // for I/O
#include <vector>    // for std::vector
#include <algorithm> // for std::sort, std::max, etc.
#include <cmath>     // for math functions like sqrt, pow
#include <queue>     // for std::queue, std::priority_queue
#include <map>       // for std::map
#include <set>       // for std::set
#include <string>    // for std::string
#include <numeric>   // for std::gcd, std::lcm, accumulate
using namespace std;

// Typedefs for convenience
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

// Fast I/O
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// Solution here
void solve() {
    int t; cin >> t;

    while (t--) {
        ll x,y,k;
        cin >> x >> y >> k;

        ll ans = 0;

        ll min_x = ceil(x/(k*1.0));
        ll min_y = ceil(y/(k*1.0));

        if (min_x > min_y) {
            ans = 2*min_x - 1;
        } else {
            ans = 2*min_y;
        }
        
        cout << ans << '\n';
    }
}

// Run this
int main() {
    //freopen("input.txt", "r", stdin);   // Input will be read from input.txt
    //freopen("output.txt", "w", stdout); // Output will be written to output.txt
    FAST_IO;

    solve();

    return 0;
}