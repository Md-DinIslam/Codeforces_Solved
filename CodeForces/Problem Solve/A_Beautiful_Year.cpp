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
  int num;
  cin >> num;
  int a, b, c, d;
  while (true)
  {
    num++;
    a = num % 10;
    b = (num / 10) % 10;
    c = (num / 100) % 10;
    d = (num / 1000) % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
      cout << num << endl;
      break;
    }
  }
  return 0;
}