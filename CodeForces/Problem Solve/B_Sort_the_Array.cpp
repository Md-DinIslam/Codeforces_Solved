/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n;
    cin >> n;
    int v[n], t[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        t[i] = v[i];
    }
    map<int, int> indx;
    sort(t, t + n);
    for (int i = 0; i < n; ++i)
        indx[t[i]] = i;
    for (int i = 0; i < n; ++i) {
        v[i] = indx[v[i]];
    }
    int lb = -1, rb = -1;
    for (int i = 0; i < n; ++i) {
        if (v[i] != i) {
            lb = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (v[i] != i) {
            rb = i;
            break;
        }
    }
    if (lb == -1 || rb == -1) {
        cout << "yes\n" << "1 1\n";
    }
    else {
        reverse(v + lb, v + rb + 1);
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (v[i] != i) ok = false;
        }
        if (ok) cout << "yes\n" << lb + 1 << ' ' << rb + 1 << '\n';
        else cout << "no\n";
    }
    // for (auto &x : v) cout << x << ' ';
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