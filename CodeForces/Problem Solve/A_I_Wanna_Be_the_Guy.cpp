#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, p;
    cin >> n >> p;
    set<int> st;
    for (int i = 0; i < p; ++i) {
        int x;
        cin >> x;
        st.insert(x);
    }
    cin >> p;
    for (int i = 0; i < p; ++i) {
        int x;
        cin >> x;
        st.insert(x);
    }
    if (st.size() >= n) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
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
    // cin >> t;
    while (t--) {
        solve();
    }
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case " << i << ": ";
    //     solve();
    // }
}