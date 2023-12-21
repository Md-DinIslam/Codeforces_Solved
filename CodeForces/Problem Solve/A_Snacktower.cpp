/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e6 + 10;
int cnt[mxN];
void solve() {
    int n;
    cin >> n;
    int n2 = n;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        cnt[x] = 1;
        while (cnt[n2] == 1) {
            cout << n2 << ' ';
            n2--;
        }
        cout << '\n';
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