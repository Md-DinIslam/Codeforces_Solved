/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

// Debug..
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define ll long long
const int mod = 1e9 + 7;
void solve() {
    int x, y;
    int n;
    cin >> x >> y >> n;
    ll dp[7] = {0};
    n = n % 6;
    dp[1] = x;
    dp[2] = y;
    for (int i = 3; i <= 6; ++i) {
        dp[i] = dp[i - 1] - dp[i - 2];
    }
    if (n == 0) n = 6;
    dp[n] = dp[n] % mod + mod;
    dp[n] %= mod;
    cout << dp[n];
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}