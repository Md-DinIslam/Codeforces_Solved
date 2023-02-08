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
  int x;
  cin >> x;
  int qoution = 0, rem = 0, step = 0;
  qoution = x / 5;
  if(x%5!= 0)
  {
    rem = 1;
  }
  step = qoution + rem;
  cout << step << endl;
  return 0;
}