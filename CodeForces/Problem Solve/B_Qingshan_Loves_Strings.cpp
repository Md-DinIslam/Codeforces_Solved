/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
bool ok(string &s) {
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            return 0;
        }
    }
    return 1;
}
void solve() {
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    if (ok(s)) {
        cout << "YES\n";
        return;
    }
    if (!ok(t) || *t.begin() != *--t.end()) {
        cout << "NO\n";
        return;
    }
    bool zz = 0, oo = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            if (s[i] == '1') oo = 1;
            if (s[i] == '0') zz = 1;
        }
    }
    if (zz && t[0] == '0') {
        cout << "NO\n";
    }
    else if(oo && t[0] == '1'){
        cout << "NO\n";
    }
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
    cin >> t;
    while (t--) solve();
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": "; solve();
    // }
    return 0;
}