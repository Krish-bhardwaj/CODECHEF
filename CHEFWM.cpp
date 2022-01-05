#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m;
    vector<long long> arr;
    long long val = 0;
    cin >> n >> m;
    long long ans = 0, temp = m;
    for (long long i = 2; i * i <= m; i++)
    {
        if (!(temp % i))
        {
            ans++;
            while (!(temp % i))
            {
                temp /= i;
            }
        }
    }
    if (temp > 1)
    {
        ans++;
    }
    for (long long i = 1; i * i <= n; i++)
    {
        if (!(n % i))
        {
            arr.push_back(i);
            if (i != (n / i))
            {
                arr.push_back(n / i);
            }
        }
    }
    for (auto x : arr)
    {
        if (x <= ans)
        {
            val = x;
        }
    }
    cout << val << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}