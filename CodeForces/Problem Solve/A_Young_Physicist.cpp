/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n;
    cin >> n;
    int sa = 0, sb = 0, sc = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        sa += a, sb += b, sc += c;
    }
    if (!sa && !sb && !sc) cout << "YES\n";
    else cout << "NO\n";
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