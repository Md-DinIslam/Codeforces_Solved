/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
void solve() {
    ll f;
    cin >> f;
    if (f & 1) cout << (f - 1) / 2 - f;
    else cout << (f / 2);
    // ll n = f / 2;
    // ll evSum = (n * (n + 1));
    // if (f & 1) n++;
    // ll odSum = (n * n);
    // cout << evSum - odSum;
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