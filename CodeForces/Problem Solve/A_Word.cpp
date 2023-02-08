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
  int u_c = 0, l_c = 0;
  int size = s.length();
  cout << size << endl;
  for (int i = 0; i < size; i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
      u_c++;
    }
    else
    {
      l_c++;
    }
  }
  cout << u_c << " " << l_c << endl;

  if (u_c > l_c)
  {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
  else
  {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  cout << s << endl;
  return 0;
}