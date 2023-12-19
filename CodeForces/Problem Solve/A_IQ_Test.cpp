/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s[4];
    for (int i = 0; i < 4; ++i) {
        cin >> s[i];
    }
    bool ok = 0;
    for (int i = 1; i < 4; ++i) {
        if (!ok) {
            for (int j = 1; j < 4; ++j) {
                int col = 1, emp = 1;
                char temp = s[i][j];
                if (temp == s[i][j - 1] && temp == s[i - 1][j] && temp == s[i - 1][j - 1]) {
                    ok = 1;
                    break;
                }
                if (temp == '#') {
                    col += (temp == s[i - 1][j]) + (temp == s[i - 1][j - 1]) + (temp == s[i][j - 1]);
                    emp = 4 - col;
                }
                else {
                    emp += (temp == s[i - 1][j]) + (temp == s[i - 1][j - 1]) + (temp == s[i][j - 1]);
                    col = 4 - emp;
                }
                if (col & 1 || emp & 1) {
                    ok = 1;
                    break;
                }
            }
        }
    }
    if (!ok) cout << "NO\n";
    else cout << "YES\n";
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