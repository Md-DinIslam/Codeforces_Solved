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
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i < n; i++)
  {
    s[i] = toupper(s[i]);
  }
  sort(s.begin(), s.end());
  int co = 1;
  for (int i = 1; i < n; i++)
  {
    if (s[i] != s[i - 1])
    {
      co++;
    }
  }
  if (co == 26)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}