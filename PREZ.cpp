#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n, string s)
{
    ll sum = 0;
    for (int i = n; i >= 0; i--)
    {
        ll v = (int(s[i]) - int('0') + sum) % 10;
        if (v == 0)
            continue;
        sum += 10 - v;
    }
    return sum;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        ll l = 0, r = n - 1, a = 0;
        while (l <= r)
        {
            ll n = (l + r) / 2;
            if (solve(n, str) > k)
                r = n - 1;
            else
            {
                a = n + 1;
                l = n + 1;
            }
        }
        cout << a << endl;
    }
    return 0;
}