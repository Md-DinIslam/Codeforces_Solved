/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1.5e5 + 10;
int presum[mxN];
void solve() {
    int n;
    cin >> n;
    cout << (360 % (180 - n) == 0 ? "YES\n" : "NO\n");
    // int ans = 180 - n;
    // ans = 360 % ans;
    // if(ans) cout << "NO\n";
    // else cout << "YES\n";
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