#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int longestNonDecreasingSubsequence(vector<int> arr)
{
    multiset<int> s;
    multiset<int>::iterator it;
    int sizeOfarray = arr.size();
    for (int i = 0; i < sizeOfarray; i++)
    {
        s.insert(arr[i]);
        it = s.upper_bound(arr[i]);
        if (it != s.end())
            s.erase(it);
    }
    return s.size();
}
void solve()
{

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    

    cout << longestNonDecreasingSubsequence(a) + longestNonDecreasingSubsequence(b) << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}