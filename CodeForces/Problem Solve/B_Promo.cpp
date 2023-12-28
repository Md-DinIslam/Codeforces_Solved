/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, q;
    cin >> n >> q;
    ll pref[n + 1] = {0}, v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v, v + n, [&](int a, int b) {return a > b;});
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + v[i];
    }
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << pref[a] - pref[a - b] << '\n';
    }
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