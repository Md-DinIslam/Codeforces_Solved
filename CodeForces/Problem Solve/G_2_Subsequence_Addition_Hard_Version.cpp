/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
void solve() {
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v, v + n);
    if (v[0] != 1) cout << "NO\n";
    else {
        ll sum = 0, ok = 0;
        for (int i = 1; i < n; ++i) {
            sum += v[i - 1];
            if (v[i] > sum) {
                ok = 1;
                break;
            }
        }
        if (ok) cout << "NO\n";
        else cout << "YES\n";
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
    cin >> t;
    while (t--) solve();
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": "; solve();
    // }
    return 0;
}