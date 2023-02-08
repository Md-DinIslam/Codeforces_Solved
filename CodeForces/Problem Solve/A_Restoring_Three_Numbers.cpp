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
  int ar[4];
  for (int i = 0; i < 4; i++)
  {
    cin >> ar[i];
  }
  sort(ar, ar + 4);
  long a, b, c;
  a = ar[3] - ar[0];
  b = ar[3] - ar[1];
  c = ar[3] - ar[2];
  cout << a << " " << b << " " << c << endl;
  return 0;
}