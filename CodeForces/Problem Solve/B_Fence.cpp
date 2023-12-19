/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1.5e5 + 10;
int presum[mxN];
void solve() {
    int n, k;
    cin >> n >> k;
    int v[n];
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        presum[i] = v[i] + presum[i - 1];
    }
    int sum = presum[k], ans;
    for (int i = 1; i + k - 1 <= n; ++i) {
        int temp = presum[i + k - 1] - presum[i - 1];
        if (temp <= sum) {
            ans = i;
            sum = temp;
        }
    }
    cout << ans;
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