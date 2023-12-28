/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
int cnt[10005];
void solve() {
    int n, m, tp;
    cin >> n >> m >> tp;
    int v[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
        }
    }
    cout << (m * (m - 1)) / 2 << '\n';
    for (int i = 1; i <= m; ++i) {
        if (tp == 0) {
            for (int j = 1; j <= m - i; ++j) {
                cout << j << ' ' << j + 1 << '\n';
            }
        }
        else {
            for (int j = m - 1; j >= i; --j) {
                cout << j + 1 << ' ' << j << '\n';
            }
        }
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