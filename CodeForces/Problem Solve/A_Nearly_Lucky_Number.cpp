#include <bits/stdc++.h>
using namespace std;
string NLN(long long n)
{
  int flag = 0;
  while (n != 0)
  {
    if (n % 10 == 4 || n % 10 == 7)
    {
      flag++;
    }
    n /= 10;
  }
  if (flag == 4 || flag == 7)
  {
    return "YES";
  }
  else
  {
    return "NO";
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  long long n;
  cin >> n;
  cout << NLN(n) << endl;
  return 0;
}