/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b) {
    if (!b) return a;
    return gcd(b, a % b);
}
void solve() {
    int n, m;
    cin >> n >> m;
    ll a[n], v[m];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    ll ans = 0;
    for (int i = 1; i < n; ++i) {
        ans = gcd(ans, a[i] - a[0]);
    }
    for (int i = 0; i < m; ++i) {
        ll b;
        cin >> b;
        cout << gcd(ans, b + a[0]) << " ";
        // cout << ans << " ";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    // cin >> t;
    while (t--) solve();
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": "; solve();
    // }
    return 0;
}