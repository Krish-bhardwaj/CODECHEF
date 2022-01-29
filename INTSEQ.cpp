

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int k;
    cin >> k;
    int c = 0;
    while (k % 2 == 0)
    {
        k /= 2;
        c++;
    }
    cout << c << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}