#include <bits/stdc++.h>
using namespace std;
int main()
{
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
  string s;
  cin >> s;
  if (s[0] >= 97)
  {
    s[0] -= 32;
  }
  cout << s << endl;
  return 0;
}