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
  string s1;
  cin >> s1;
  string s2;
  cin >> s2;
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  if (s1 < s2)
  {
    cout << "-1" << endl;
  }
  else if (s1 > s2)
  {
    cout << "1" << endl;
  }
  else
  {
    cout << "0" << endl;
  }
  // cout<<s1<<endl<<s2<<endl;
  return 0;
}