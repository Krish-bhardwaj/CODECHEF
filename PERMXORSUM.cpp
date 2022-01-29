#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll S(ll n){
    ll no = 0,c = 0;
    while(n)
    {
        if(n%2 == 0) no += (1LL<<c);
        n /= 2,c++;
        if(n <= 0) break;
    }
    return no;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1; cin>>t;
    while (t--){
        ll n; cin>>n;
        ll ans = 0;
        while(n > 0)
        {
            ll a = S(n);
            ll b = n;
            if((b&(b+1)) == 0) b--;
            ll val = ((b * (b+1)) / 2) - ((a * (a-1)) / 2);
            ans += (val*2);
            n = a-1;
        }
        cout<<ans<<"\n";
    }
}