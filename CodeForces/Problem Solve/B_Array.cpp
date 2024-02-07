/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

// Debug..
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define ll long long
const int mxN = 1e5 + 10;
int cnt[mxN];
void solve() {
    int n, k;
    cin >> n >> k;
    int v[n];
    int disEle = 0;
    for (auto &x : v) {
        cin >> x;
        disEle += (cnt[x] == 0);
        cnt[x]++;
    }
    // debug(disEle);
    if (disEle < k) {
        cout << "-1 -1";
        return;
    }
    int lb = 0, rb = n - 1;
    for (int i = 0; i < n; ++i) {
        --cnt[v[rb]];
        if (cnt[v[rb]] == 0) {
            --disEle;
            if (disEle < k) {
                ++cnt[v[rb]];
                ++disEle;
                break;
            }
        }
        --rb;
    }
    for (int i = 0; i < n; ++i) {
        --cnt[v[lb]];
        if (cnt[v[lb]] == 0) {
            --disEle;
            if (disEle < k) {
                ++cnt[v[lb]];
                ++disEle;
                break;
            }
        }
        ++lb;
    }
    cout << lb + 1 << " " << rb + 1;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}