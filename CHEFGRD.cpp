#include<bits/stdc++.h>
using namespace std;

#define solve(C,X,Y) bool( ( abs(C - X) + abs( C - Y) ) % 2 ) 

int main(){
    int T;
    cin>>T;
    while(T--)
    {
       int N,X,Y;
       cin>>N>>X>>Y;
       int C = (N+1)/2;
       cout<<solve(C,X,Y)<<endl;
    }
}