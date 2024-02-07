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
#define pb push_back
void solve() {
    int n;
    cin >> n;
    vector<int> mid;
    ll ans = 0, ans2 = 0;
    for (int j = 0; j < n; ++j) {
        int m;
        cin >> m;
        vector<int> v(m);
        for (int i = 0; i < m; ++i)
            cin >> v[i];
        for (int i = 0; i < m / 2; ++i) {
            ans += v[i];
            ans2 += v[m - i - 1];
        }
        if (m & 1) mid.pb(v[m / 2]);
    }
    sort(begin(mid), end(mid), greater<int>());
    // __print(mid);
    for (int i = 0; i < size(mid); ++i) {
        if (i % 2 == 0) ans += mid[i];
        else ans2 += mid[i];
    }
    cout << ans << " " << ans2;

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