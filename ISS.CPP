#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    cin.tie(0);
    int n = 4e6 + 5;
    int calculate[n], answer[n];
    for (int i = 0; i < n; i++)
    {
        calculate[i] = i;
        answer[i] = 0;
    }
    for (int p = 2; p < n; p++)
    {
        if (calculate[p] == p)
        {
            calculate[p] = p - 1;
            for (int i = 2 * p; i < n; i += p)
            {
                calculate[i] = (calculate[i] / p) * (p - 1);
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        answer[i] += i - 1;
        for (int j = 2 * i; j < n; j += i)
        {
            answer[j] += i * ((1 + calculate[j / i]) / 2);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << answer[4 * k + 1] << endl;
    }
    return 0;
}