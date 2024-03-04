/* GREEN UNIVERSITY OF BANGLADESH
    Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

// Debug..
#ifdef LOCAL
#include "debug.h"
#endif

#define ll long long

void Din() {
    ll a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "0";
        return;
    }
    int j = 0, bit = 0;
    while (a || b) {
        // if ((a & 1) ^ (b & 1))
        //     bit = j;

        bool x = a & 1; // 0/1....
        bool y = b & 1; // 0/1....
        // debug(x ^ y);
        if (x ^ y) // Checking till last X-OR bit is set.....
            bit = j;
        a >>= 1;
        b >>= 1;
        ++j;
    }
    ++bit;
    cout << (ll) (1ll << bit) - 1 << '\n';
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) Din();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; Din();
    // }
    return 0;
}