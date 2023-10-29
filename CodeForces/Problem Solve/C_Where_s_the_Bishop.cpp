#include <bits/stdc++.h>
using namespace std;
void solve() {
    vector<string> st;
    for (int i = 0; i < 8; ++i) {
        string s;
        cin >> s;
        st.push_back(s);
    }
    int row, col;
    for (int i = 1; i < 7; ++i) {
        for (int j = 1; j < 7; ++j)
            // int x = i, y = j;
            if (st[i][j] == '#') {
                if (st[i - 1][j - 1] == '#' && st[i - 1][j + 1] == '#' && st[i + 1][j - 1] == '#' && st[i + 1][j + 1]) row = i, col = j;
            }
    }
    ++row, ++col;
    cout << row << " " << col << '\n';
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