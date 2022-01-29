#include <bits/stdc++.h>
using namespace std;

void solve(int n , int k)
{
    if(n == 1 && k == 1)
        cout<<1<<endl;
    else if (n > 1 && k == 1)
    {
        cout << -1 << endl;
    }

    else
    {
        int num = 1;
        for (int i = 0; i < k - 1; i++)
        {
            cout << num << " ";
            num++;
        }
        for (int i = n; i >= num; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        solve(n,k);
    }
    return 0;
}