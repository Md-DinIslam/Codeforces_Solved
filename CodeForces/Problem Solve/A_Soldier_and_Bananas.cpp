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
  int k,w;
  long long n;
  cin>>k>>w>>n;
  long long sum = 0;
  for(int i = 1;i<=n;i++)
  {
    sum += (k * i);
  }
  // cout<<sum<<endl;
  if(sum > w)
  {
  cout<<(sum - w)<<endl;
  }
  else{
    cout<<"0"<<endl;
  }
  return 0;
}