/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e6;
vector<int> prime, isPrime(mxN);
void sieve() {
    prime.push_back(2);
    isPrime[2] = 1;
    for (int i = 3; i <= mxN; i += 2)
        isPrime[i] = 1;
    for (int i = 3; i * i <= mxN; i += 2) {
        if (isPrime[i]) {
            for (int j = 2 * i; j < mxN; j += i) {
                isPrime[j] = 0;
            }
        }
    }
    for (int i = 3; i <= mxN; i += 2) {
        if (isPrime[i]) prime.push_back(i);
    }
}
void solve() {
    int d;
    cin >> d;
    int val = 1 + d;
    int x = lower_bound(begin(prime), end(prime), val) - prime.begin();
    int y = lower_bound(begin(prime), end(prime), (prime[x] + d)) - prime.begin();
    cout << prime[x] * prime[y] << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    sieve();
    int t = 1;
    cin >> t;
    while (t--) solve();
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": "; solve();
    // }
    return 0;
}