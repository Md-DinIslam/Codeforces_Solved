/* GREEN UNIVERSITY OF BANGLADESH
    Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

// Debug..
#ifdef LOCAL
#include "debug.h"
#endif

#define ll long long
const int mxN = 2e5 + 10;
int n, q;
int v[mxN];
struct node {
    ll sum;
} sg[1 << 18];

void upd(int OR, int indx, int val, int s = 1, int e = n, int i = 1) {
    if (s == e) sg[i].sum = val;
    else {
        int mid = (s + e) / 2;
        if (indx <= mid) upd(!OR, indx, val, s, mid, 2 * i);
        else upd(!OR, indx, val, mid + 1, e, 2 * i + 1);

        if (OR) sg[i].sum = sg[2 * i].sum | sg[2 * i + 1].sum;
        else sg[i].sum = sg[2 * i].sum ^ sg[2 * i + 1].sum;
    }
}
void solve() {
    cin >> n >> q;
    bool OR = (n & 1 ^ 1);
    n = 1 << n;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        if (OR) upd(0, i, v[i]);
        else upd(1, i, v[i]);
    }
    while (q--) {
        int indx, val;
        cin >> indx >> val;
        if (OR) upd(0, indx, val);
        else upd(1, indx, val);
        cout << sg[1].sum << '\n';
    }
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