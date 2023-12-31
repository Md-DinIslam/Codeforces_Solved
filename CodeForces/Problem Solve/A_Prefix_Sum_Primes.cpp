/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void print(int x) {
    for (int i = 0; i < n; ++i) {
        cout << x << " ";
    }
}
void solve() {
    cin >> n;
    int c1 = 0, c2 = 0;
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        if (x & 1) c1++;
        else c2++;
    }
    if (c1 == 0) print(2);
    else if (c2 == 0) print(1);
    else {
        cout << 2 << " " << 1 << " ";
        --c2, --c1;
        while (c2 > 0) {
            cout << 2 << " ";
            c2--;
        }
        while (c1 > 0) {
            cout << 1 << " ";
            c1--;
        }
    }
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
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": "; solve();
    // }
    return 0;
}