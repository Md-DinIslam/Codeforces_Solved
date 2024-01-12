/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define ff first
const int mxN = 3e6 + 10;
ll v[mxN], bit[mxN], lb[mxN], rb[mxN];
void upd(int i, int x) {
    while (i > 0 && i < mxN) {
        bit[i] += x;
        i += (i & -i);
    }
}
ll qry(int i) {
    ll ans = 0;
    while (i > 0) {
        ans += bit[i];
        i -= (i & -i);
    }
    return ans;
}
void solve() {
    int n;
    cin >> n;
    map<ll, int> cmp;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        cmp[v[i]];
    }
    int ptr = 1;
    for (auto &x : cmp) {
        x.ss = ptr++;
    }
    for (int i = 1; i <= n; ++i) {
        v[i] = cmp[v[i]];
    }
    for (int i = 1; i <= n; ++i) {
        lb[i] = qry(n) - qry(v[i]);
        upd(v[i], 1);
    }
    memset(bit, 0, sizeof(bit));
    for (int i = n; i > 0; --i) {
        rb[i] = qry(v[i]);
        upd(v[i], 1);
    }
    // for (int i = 1; i <= n; ++i)
    //     cout << rb[i] << " \n"[i == n];
    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += (lb[i] * rb[i]);
    }
    cout << ans;
}
// void solve() {
//     int n;
//     cin >> n;
//     oset st;
//     for (int i = 0, x; i < n; ++i) {
//         cin >> v[i];
//         lb[i] = st.order_of_key(v[i]);
//         st.insert(v[i]);
//     }
//     st.clear();
//     for (int i = n - 1; i >= 0; --i) {
//         int x = st.order_of_key(v[i]);
//         rb[i] = st.size() - x;
//         st.insert(v[i]);
//     }
//     ll cnt = 0;
//     for (int i = 0; i < n; ++i) {
//         cnt += (lb[i] * rb[i]);
//     }
//     cout << cnt;
// }
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    // cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}