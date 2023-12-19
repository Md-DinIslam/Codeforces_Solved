/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
void solve() {
    string tp, s;
    cin >> tp >> s;
    string pre = "qwertyuiopasdfghjkl;zxcvbnm,./", ans = "";
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < pre.size(); ++j) {
            if (s[i] == pre[j]) {
                if (tp == "R") ans += pre[j - 1];
                else ans += pre[j + 1];
            }
        }
    }
    cout << ans << '\n';
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