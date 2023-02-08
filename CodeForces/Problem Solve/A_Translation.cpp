#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string s;
  cin >> s;
  string t;
  cin >> t;
  reverse(s.begin(), s.end());
  if (s == t)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}