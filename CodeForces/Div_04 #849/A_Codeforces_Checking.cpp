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
  cin>>t;
  while(t--)
  {
    char c;
    cin>>c;
    string s = "codeforces";
    int flag = 0;
    for(int i = 0;i<s.size();i++)
    {
      if(c == s[i]){
        flag = 1;
        break;
      }
    }
    if(flag == 1)
    {
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}