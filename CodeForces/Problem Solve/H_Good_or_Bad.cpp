#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    string a = "010", b = "101";
    for (int i = 0; i < s.size(); ++i) {
        string temp = s.substr(i, 3);
        if (temp == a || temp == b) {
            cout << "Good\n";
            return;
        }
    }
    cout << "Bad\n";
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
