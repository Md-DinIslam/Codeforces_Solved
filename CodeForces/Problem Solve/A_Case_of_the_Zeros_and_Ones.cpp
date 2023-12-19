/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
void solve() {
    int n;
    cin >> n;
    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; ++i) {
        char x; cin >> x;
        if (x == '1') ++c1;
        else ++c0;
    }
    cout << (n - 2 * (min(c0, c1)));
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