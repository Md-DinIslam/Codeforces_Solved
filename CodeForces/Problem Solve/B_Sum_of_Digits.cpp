/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    if (s.size() < 2) cout << "0\n";
    else {
        int ans = 0, sum = 10;
        while (sum > 9) {
            sum = 0;
            for (int i = 0; i < s.size(); ++i) {
                sum += (s[i] - '0');
            }
            s = to_string(sum);
            ++ans;
        }
        cout << ans;
    }
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