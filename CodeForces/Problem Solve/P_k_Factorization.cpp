/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e5 + 10;
bool isPrime[mxN];
vector<int> prime;
void sieve(int n) {
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            prime.push_back(i);
            n /= i;
        }
    }
}
void solve() {
    ll n, k;
    cin >> n >> k;
    sieve(n);
    if (prime.size() < k) cout << "-1\n";
    else {
        for (int i = 0; i < k - 1; ++i) {
            cout << prime[i] << " ";
        }
        ll ans = 1;
        for (int i = k - 1; i < prime.size(); ++i) {
            ans *= prime[i];
        }
        cout << ans << '\n';
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
    // cin >> t;
    while (t--) solve();
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": "; solve();
    // }
    return 0;
}