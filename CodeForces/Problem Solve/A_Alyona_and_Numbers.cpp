/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[5], b[5];
void solve() {
    ll n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        a[i % 5]++;
    for (int i = 1; i <= m; ++i)
        b[i % 5]++;
    ll ans = a[0] * b[0] + a[1] * b[4] + a[2] * b[3] + a[3] * b[2] + a[4] * b[1];
    cout << ans << '\n';

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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