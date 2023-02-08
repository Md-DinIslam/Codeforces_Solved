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
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int last = s.size() - 1;
    int left = 0, right = last;
    for (int i = 0; i < s.size() / 2; i++)
    {
      if ((s[left] == '0' && s[right] == '1') || (s[left] == '1' && s[right] == '0'))
      {
        left++;
        right--;
      }
      else
      {
        break;
      }
    }
    // cout << left << " " << right << endl;
    int cnt = 0;
    for (int j = left; j <= right; j++)
    {
      cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}