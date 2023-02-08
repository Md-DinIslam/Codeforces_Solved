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

  int n;
  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    int size = s.size() - 2;
    if (s.size() > 10)
    {
      // cout << size << endl;
      cout << s[0] << size << s[size + 1] << endl;
    }
    else
    {
      // for (int i = 0; i < s.size(); i++)
      // {
      //   cout << s[i] << endl;
      // }
      cout << s << endl;
    }
  }
  return 0;
}