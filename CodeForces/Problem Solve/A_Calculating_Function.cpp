#include <bits/stdc++.h>
using namespace std;
int main()
{
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << (n / 2) << endl;
    }
    else
    {
        long long sum = (n + 1) / (2 * (-1));
        cout << sum << endl;
    }
}