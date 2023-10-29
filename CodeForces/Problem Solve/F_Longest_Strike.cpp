#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        freq[x]++;
    }
    for (auto &x : freq) {
        if (x.second >= k)
            v.push_back(x.first);
    }
    if (v.size() == 0) {
        cout << -1 << '\n';
        return;
    }
    int lb = v[0], rb = v[0], cnt = 0, pt = v[0];
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] - 1 == v[i - 1]) {
            if (cnt < v[i] - pt) {
                lb = pt;
                rb = v[i];
                cnt = v[i] - pt;
            }
        }
        else pt = v[i];
    }
    cout << lb << " " << rb << '\n';
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