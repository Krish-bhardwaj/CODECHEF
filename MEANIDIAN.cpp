#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,k, i,cnt;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        vector<ll>v(n);
        cnt = 0;
        for(i=0;i<n;i++){
            cin>>v[i];
            cnt+=v[i];
        }
        cout<<(cnt/n)<<endl;


        

    }


    return 0;
}