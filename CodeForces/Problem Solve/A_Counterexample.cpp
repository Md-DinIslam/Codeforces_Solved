/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
void solve() {
    ll lb, rb;
    cin >> lb >> rb;
    bool ok = 0;
    for (int i = lb; i <= rb; ++i) {
        if (i & 1) lb++;
        if (lb + 2 > rb) {
            cout << "-1\n";
            return;
        }
        else {
            cout << lb << ' ' << (lb + 1) << ' ' << (lb + 2);
            return;
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