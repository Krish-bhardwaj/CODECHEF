#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define inti long long int
#define mod 1000000007
#define endl '\n'
#define inf 1e18
#define PQ priority_queue<int>
#define PQM priority_queue<int,vector<int>,greater<int>>
#define HashMap(x,y) unordered_map<x,y>
#define binary_string_to_int_decimal(s) stoi(s,0,2)
#define string_to_int(s)  stoi(s)
#define Occ(s,ch) count(s.begin(),s.end(),ch)
#define HashMap(x,y) unordered_map<x,y>
#define int_to_string(x) to_string(x)
#define setbits(x) __builtin_popcountll(x)//x>=0
#define ctzll(x)   __builtin_ctzll(x)//x>0,x=0:64
#define clz32(x)   __builtin_clz(x)//x>0,x=0:32
#define clz64(x)   __builtin_clzll(x)//x>0,x=0:64
const int MAX = 1e9;

const int MIN = -1e9;

template<class T> using oset = tree<T, null_type, less_equal<T>, rb_tree_tag,
                        tree_order_statistics_node_update>;


int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int powM(int x, int y, int m)
{ int ans2;
  int ans = 1, r = 1;
  x %= m;
  while (r > 0 && r <= y)
  {
    if (r & y)
    {
      ans *= x;

      ans %= m;

    }
    r <<= 1;
    x *= x;
    x %= m;

  }
  return ans;
}
const int N = 2001;
int fact[N];
int invFact[N];
int fast_pow(int a, int p, int m) {
  int res = 1;
  while (p) {
    if (p % 2 == 0) {
      a = (a * a) % m;
      p /= 2;
    } else {
      res = (res * a) % m;
      p--;
    }
  }
  return res;
}
void Call_For_nCr()
{
  fact[0] = invFact[0] = 1;
  for (int i = 1; i < N; i++) {
    fact[i] = (fact[i - 1] * i) % mod;
    invFact[i] = fast_pow(fact[i], mod - 2, mod);
  }

}
int nCR(int n, int k, int m) {
  if (k > n) {
    return 0;
  }

  return fact[n] * invFact[k] % m * invFact[n - k] % m;
}

void solve()
{

  int n;
  cin >> n;
  vector<int> ans(n + 1);
  ans[1] = 1;
  //cout << n << " ";
  if (n == 2 ) {
    cout << "NO" << endl; return;
  }
  else if (n == 4) {
    cout << "YES" << endl;
    cout << 2 << " " << 1 << " " << 4 << " " << 3 << endl;
    return;
  }
  else if (n % 2 == 0) {
    cout << "YES" << endl;
    int start = (n / 2) + 1;
    int a = 2;
    for (int i = start; i <= n; i++) {
      ans[i] = a;
      a += 2;
    }
    start = (n / 2) ;
    a = 3;
    for (int i = start; i > 1 ; i--) {
      ans[i] = a;
      a += 2;
    }
    int temp;
    temp = ans[n - 1];
    ans[n - 1] = ans[n];
    ans[n] = temp;
    for (int i = 1; i <= n; i++)
      cout << ans[i] << " ";
    cout << endl;

  }
  else {
    cout << "YES" << endl;
    int start = ((n + 1) / 2) + 1;
    int a = 2;
    for (int i = start; i <= n; i++) {
      ans[i] = a;
      a += 2;
    }
    start = (n + 1) / 2;
    a = 3;
    for (int i = start; i > 1; i--) {
      ans[i] = a;
      a += 2;
    }
    for (int i = 1; i <= n; i++)
      cout << ans[i] << " ";
    cout << endl;
  }

}

void file_io()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

}

signed main()
{
  file_io();
  int t = 1 ;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;

}