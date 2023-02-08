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
  int t;
  cin >> t;
  while (t--)
  {
    long n;
    cin >> n;
    long a, b;
    if (n > 2)
    {
      if (n % 2 == 0)
      {
        a = (n / 2) - 1;
        cout << a << endl;
      }
      else
      {
        b = n / 2;
        cout << b << endl;
      }
    }
    else
    {
      cout << "0" << endl;
    }
  }
  return 0;
}