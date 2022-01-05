#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n , ans = 0;
    cin >> n;
    vector<int> A(n) , B(32);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) for (int j = 0; j < 32; j++)    B[j] += ((A[i] & (1 << j)) > 0);
    for (int i = 0; i < 32; i++)    if (B[i] >= 2)  ans |= (1 << i);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}