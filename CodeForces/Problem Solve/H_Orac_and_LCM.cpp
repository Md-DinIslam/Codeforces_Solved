/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}
void solve() {
    int n;
    cin >> n;
    ll v[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    ll suffixGcd[n + 1];
    suffixGcd[n] = v[n];
    for (int i = n - 1; i; --i) {
        suffixGcd[i] = gcd(suffixGcd[i + 1], v[i]);
    }
    ll b[n + 1];
    for (int i = 1; i < n; ++i) {
        b[i] = lcm(suffixGcd[i + 1], v[i]);
        // cout << b[i] << " \n"[i == n - 1];
    }
    ll ans = b[1];
    for (int i = 2; i < n; ++i) {
        ans = gcd(ans, b[i]);
    }
    cout << ans;
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