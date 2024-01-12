/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
typedef tree<ll, null_type, greater_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> oset;
void solve() {
    int n;
    ll x;
    cin >> n >> x;
    ll pref[n + 1] = {0}, cnt = 0;
    for (int i = 1, x; i <= n; ++i) {
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }
    oset st;
    st.insert(0);
    for (int i = 1; i <= n; ++i) {
        cnt += st.order_of_key(pref[i] - x);
        st.insert(pref[i]);
    }
    cout << cnt;
}
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