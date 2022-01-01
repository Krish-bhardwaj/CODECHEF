#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	long long int n,t;
	cin>>t;
	while(t--){
	    cin>>n;
	    long long int merges=0;
	    while(n>1)
	    {
	        merges += n/2;
	        n = n/2 + n%2;
	        
	    }
	    cout<<merges<<endl;
	}
	return 0;
}

