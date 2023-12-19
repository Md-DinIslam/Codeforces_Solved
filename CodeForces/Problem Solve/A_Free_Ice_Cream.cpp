/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
void solve() {
    ll n, x;
    cin >> n >> x;
    ll ice = x, child = 0;
    for (int i = 0; i < n; ++i) {
        char op;
        int val;
        cin >> op >> val;
        if (op == '+') {
            ice += val;
        }
        else {
            if (ice >= val) ice -= val;
            else ++child;
        }
    }
    cout << ice << ' ' << child << '\n';
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