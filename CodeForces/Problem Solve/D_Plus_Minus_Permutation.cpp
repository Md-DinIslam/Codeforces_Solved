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
int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}
ll lcm(int a, int b) {
    return (1ll * a * b) / gcd(a, b);
}
ll sum(int n) {
    return (1ll * n * (n + 1)) / 2;
}
void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    ll xy = lcm(x, y);
    // debug(xy);
    x = n / x - n / xy;
    y = n / y - n / xy;
    ll xSum = sum(n) - sum(n - x);
    ll ySum = sum(y);
    cout << xSum - ySum << '\n';
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}