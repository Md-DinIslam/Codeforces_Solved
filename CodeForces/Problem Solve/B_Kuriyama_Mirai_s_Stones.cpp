/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
const int mxN = 1e5 + 10;
ll sum1[mxN], sum2[mxN];
void solve() {
    int n;
    cin >> n;
    int v[n];
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        sum1[i] = v[i] + sum1[i - 1];
    }
    sort(v + 1, v + n + 1);
    for (int i = 1; i <= n; ++i)
        sum2[i] = v[i] + sum2[i - 1];
    int q;
    cin >> q;
    while (q--) {
        int tp, lb, rb;
        cin >> tp >> lb >> rb;
        if (tp == 1) {
            cout << sum1[rb] - sum1[lb - 1] << '\n';
        }
        else cout << sum2[rb] - sum2[lb - 1] << '\n';
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