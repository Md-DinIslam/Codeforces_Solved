#include <bits/stdc++.h>
using namespace std;
// const int N = 1e8;
// int a[N];
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b) == c)
        {
            cout<<"Yes"<<endl;
        }
        else if((a+c)== b)
        {
            cout<<"Yes"<<endl;
        }
        else if((b+c)==a)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}