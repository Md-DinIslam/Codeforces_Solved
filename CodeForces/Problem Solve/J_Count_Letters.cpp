#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int cnt[26] = {};
    set<char> st;
    for (auto &ch : s) {
        cnt[ch - 'a']++;
        st.insert(ch);
    }
    // for(int i = 0;i < 26; ++i) cout << cnt[i] << ' ';
    for (auto &x : st) {
        cout << x << " : " << cnt[x - 'a'] << '\n';
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
