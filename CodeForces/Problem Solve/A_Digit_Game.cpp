/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n;
    string s;
    cin >> n >> s;
    bool odd = 0, even = 0;
    for (int i = 1; i <= n; ++i) {
        int x = s[i - 1] - '0';
        ((i & 1) ? (odd |= (x & 1)) : (even |= !(x % 2)));
    }
    if (n & 1) cout << (odd ? "1\n" : "2\n");
    else cout << (even ? "2\n" : "1\n");
}
int main()
{
    ios_base :: sync_with_stdio(0);
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