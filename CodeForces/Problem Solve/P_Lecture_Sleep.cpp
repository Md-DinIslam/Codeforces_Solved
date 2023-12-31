/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
void solve() {
    int n, k;
    cin >> n >> k;
    ar<int, 2> v[n];
    ll pref[n + 1] = {0}, sum = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i][0];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> v[i][1];
        pref[i] += pref[i - 1];
        if (v[i][1] == 0)
            pref[i] = v[i][0] + pref[i - 1];
        sum += ((v[i][1] == 1) ? v[i][0] : 0);
    }
    ll ans = 0;
    for (int i = k; i <= n; ++i) {
        ans = max(ans, pref[i] - pref[i - k]);
        // cout << ans << ' ';
    }
    cout << ans + sum << '\n';
}
int main()
{
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