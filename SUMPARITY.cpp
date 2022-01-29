#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin >> t;
    while (t--)
    {
        int n, s;cin >> n >> s;
        cout<<((s & 1)?((n % 2 == 1)?"ODD":"EVEN"):((n == 1)?"EVEN":"IMPOSSIBLE"))<<endl;
    }
}