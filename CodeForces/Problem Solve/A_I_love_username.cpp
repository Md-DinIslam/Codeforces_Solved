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
  int ar[n];
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  int Min = ar[0];
  int Max = ar[0];
  int cnt = 0;
  for (int i = 1; i < n; i++)
  {
    if (ar[i] > Max)
    {
      Max = ar[i];
      cnt++;
    }
    if (ar[i] < Min)
    {
      Min = ar[i];
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}