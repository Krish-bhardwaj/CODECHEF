#include<iostream>
using namespace std;
main() {
    int t;
    cin>>t;
    while (t--) {
        int tot=0, tmp;
        for (int i=1; i<=16; i++) {
            cin>>tmp;
            tot+=tmp;
        }
        tot/=2;
        cout<<tot-2<<endl;
    }
}