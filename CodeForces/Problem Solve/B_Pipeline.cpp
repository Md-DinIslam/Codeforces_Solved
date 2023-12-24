/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll getSum(ll x) {
    return (x * (x + 1)) / 2;
}
void solve() {
    ll n, k;
    cin >> n >> k;
    --n;
    ll sum = getSum(k - 1);
    if (sum < n) {
        cout << "-1\n";
    }
    else {
        ll lb = 0, rb = k - 1;
        while (lb <= rb) {
            ll mid = lb + (rb - lb) / 2;
            if (sum - getSum(mid) < n) rb = mid - 1;
            else lb = mid + 1;
        }
        cout << (k - 1 - rb) << '\n';
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