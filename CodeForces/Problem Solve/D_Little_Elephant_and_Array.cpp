#include <bits/stdc++.h>
using namespace std;

// Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Din cout.tie(NULL);

// Aliases
using ll = long long;
using lld = long double;
using ull = unsigned long long;

// TypeDEf
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef vector<vll> mat;
typedef unordered_map<ll, ll> umpll;
typedef unordered_map<int, int> umpi;
typedef map<ll, ll> mpll;

// Macros
#define ff first
#define ss second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rep(i,a, n) for (int i = a; i <= n; i++)
#define rfl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
#define pf cout << "FIRST\n";
#define nn cout << "\n";
#define bitcount __builtin_popcountll
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.end(), v.begin()

//DEBUG
void __print(int x) {cerr << x << " ";}
void __print(long x) {cerr << x << " ";}
void __print(long long x) {cerr << x << " ";}
void __print(unsigned x) {cerr << x << " ";}
void __print(unsigned long x) {cerr << x << " ";}
void __print(unsigned long long x) {cerr << x << " ";}
void __print(float x) {cerr << x << " ";}
void __print(double x) {cerr << x << " ";}
void __print(long double x) {cerr << x << " ";}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

// Constants
const lld PI = 3.141592653589793238;
const ll INF = 1e18 + 9;
const ll mod = 1e9 + 7;
const int mxN = 1e5 + 10;
int v[mxN], freq[mxN * 10], cnt, n;
struct node {
    int lb, rb, ans, block, indx;
    bool operator<(node Q) const {
        return (make_pair(this->block, rb) < make_pair(Q.block, Q.rb));
    }
} q[mxN];
bool cmp(node a, node b) {
    return a.indx < b.indx;
}
void add(ll val) {
    if (val <= n) {
        freq[val]++;
        if (freq[val] == val) cnt++;
        if (freq[val] == val + 1) cnt--;
    }
}
void remove(ll val) {
    if (val <= n) {
        freq[val]--;
        if (freq[val] == val) cnt++;
        if (freq[val] == val - 1) cnt--;
    }
}
void solve()
{
    int m, queries;
    cin >> n >> queries;
    m = (int) sqrtl(n) + 1;
    int ptr = 1;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];

    }
    for (int i = 0; i < queries; ++i) {
        cin >> q[i].lb >> q[i].rb;
        q[i].lb--, q[i].rb--;
        q[i].indx = i, q[i].block = q[i].lb / m;
    }
    sort(q, q + queries);
    int x = 0, y = 0;
    for (int i = 0; i < queries; ++i) {
        while (y < q[i].rb + 1) {
            add(v[y]);
            y++;
        }
        while (y > q[i].rb + 1) {
            y--;
            remove(v[y]);
        }
        while (x < q[i].lb) {
            remove(v[x]);
            x++;
        }
        while (x > q[i].lb) {
            x--;
            add(v[x]);
        }
        q[i].ans = cnt;
    }
    sort(q, q + queries, cmp);
    for (int i = 0; i < queries; ++i) {
        cout << q[i].ans; nn
    }
}
// Main
int main()
{
    Code By Din
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    clock_t z = clock();
    // ll t; cin >> t;
    // while(t--) solve();
    solve();
    // fl(i,t) //Kickstart
    // {
    //     cout<<"Case #"<<i+1<<": ";
    //     solve(); nn
    // }
    cerr << "\nRun Time : " << (((double)(clock() - z)) / CLOCKS_PER_SEC);
    return 0;
}