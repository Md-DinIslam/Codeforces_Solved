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
  int a, b;
  cin >> a >> b;
  int cnt = 0;
  while (true)
  {
    if (a > b)
    {
      break;
    }
    a *= 3;
    b *= 2;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}