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
  long long n;
  int k;
  cin >> n >> k;
  for (int i = 1; i <= k; i++)
  {
    if (n % 10 == 0)
    {
      n = n / 10;
      // cout << n << endl;
    }
    else
    {
      n -= 1;
      // cout << n << endl;
    }
  }
  cout << n << endl;
  return 0;
}