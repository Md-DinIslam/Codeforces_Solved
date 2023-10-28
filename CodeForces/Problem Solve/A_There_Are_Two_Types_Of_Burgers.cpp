#include <bits/stdc++.h>
using namespace std;
void solve() {
    int b, p, f, h, c;
    cin >> b >> p >> f >> h >> c;
    b /= 2;
    if (h < c) {
        swap(h, c);
        swap(p, f);
    }
    int ans = 0, cnt = min(b, p);
    b -= cnt;
    ans += (h * cnt);
    cnt = min(b, f);
    ans += (c * cnt);
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case " << i << ": ";
    //     solve();
    // }
}