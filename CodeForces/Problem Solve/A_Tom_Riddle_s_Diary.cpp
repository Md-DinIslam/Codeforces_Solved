#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    multiset<string> st;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (st.find(s) != st.end()) cout << "Yes\n";
        else cout << "No\n";
        st.insert(s);
    }
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