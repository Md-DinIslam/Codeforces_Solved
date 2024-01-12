/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve() {
    int n;
    cin >> n;
    priority_queue<int> a, b;
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        a.push(x);
    }
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        b.push(x);
    }
    int ans = 0;
    while (!a.empty()) {
        if (a.top() == b.top()) {
            a.pop(), b.pop();
        }
        else if (a.top() > b.top()) {
            ++ans;
            string temp = to_string(a.top());
            a.push(temp.size());
            a.pop();
        }
        else {
            ++ans;
            string temp = to_string(b.top());
            b.push(temp.size());
            b.pop();
        }
    }
    cout << ans << '\n';
}
int main() {
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
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}