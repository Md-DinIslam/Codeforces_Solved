#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  int co = 1;
  for (int i = 1; i < s.length(); i++)
  {
    if (s[i] != s[i - 1])
    {
      co++;
    }
  }
  if (co % 2 == 0)
  {
    cout << "CHAT WITH HER!" << endl;
  }
  else
  {
    cout << "IGNORE HIM!" << endl;
  }
  return 0;
}