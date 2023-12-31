/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxV = 1e9;
void solve() {
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<vector<int>> pref(n + 1, vector<int>(26, 0));
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i];
        pref[i + 1][s[i] - 'a']++;
    }
    while (q--) {
        int lb, rb;
        char ch;
        cin >> lb >> rb >> ch;
        --lb;
        ll left = (lb / n) * pref[n][ch - 'a'] + pref[lb % n][ch - 'a'];
        ll right = (rb / n) * pref[n][ch - 'a'] + pref[rb % n][ch - 'a'];
        cout << right - left << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
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