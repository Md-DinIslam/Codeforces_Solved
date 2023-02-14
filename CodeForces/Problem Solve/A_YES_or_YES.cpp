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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if ((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's'))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}