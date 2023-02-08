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
  string s3;
  int size2 = s1.size();
  char s2[size2];
  sort(s1.begin(), s1.end());
  // s1 = s3;
  // cout << s1 << endl;
  float size = (float)s1.size() / 2;
  for (int i = size; i < size2; i++)
  {
    s3.push_back(s1[i]);
  }
  s2[0] = s3[0];
  int j = 1;
  for(int i = 1;i<size2;i++)
  {
    if(i % 2 != 0)
    {
      s2[i] = '+';
    }
    else{
      s2[i] = s3[j];
      j++;
    }
  }
  // cout << s3 << endl;
  for(int i = 0;i<s1.size();i++)
  cout << s2[i];
  return 0;
}