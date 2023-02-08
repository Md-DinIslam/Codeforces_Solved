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
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
    if(ar[i] == 1)
    cnt = 1;
  }
  if(cnt == 1)
  {
    cout<<"HARD"<<endl;
  }
  else{
    cout<<"EASY"<<endl;
  }
  return 0;
}