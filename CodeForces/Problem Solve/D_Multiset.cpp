/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e6 + 12;
int bit[mxN];
void upd(int i, int val) {
    while (i > 0 && i < mxN) {
        bit[i] += val, i += (i & -i);
    }
}
int qry(int i) {
    int ans = 0;
    while (i > 0) {
        ans += bit[i], i -= (i & -i);
    }
    return ans;
}
void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        upd(val, 1);
    }
    int cnt = n;
    while (q--) {
        int x;
        cin >> x;
        if (x > 0) upd(x, 1), ++cnt;
        else {
            x *= -1;
            int lb = 0, rb = mxN;
            while (lb < rb) {
                int mid = (lb + rb) / 2;
                if (x <= qry(mid)) rb = mid;
                else lb = mid + 1;
            }
            upd(lb, -1), --cnt;
        }
    }
    if (!cnt) cout << "0\n";
    else {
        // for (int i = 0; i < mxN; ++i) {
        //     if (qry(i) > 0) {
        //         cout << i << '\n';
        //         break;
        //     }
        // }
        int lb = 1, rb = mxN;
        while (lb < rb) {
            int mid = (lb + rb) / 2;
            if (0 < qry(mid)) rb = mid;
            else lb = mid + 1;
        }
        cout << lb << '\n';
    }
}
signed main()
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