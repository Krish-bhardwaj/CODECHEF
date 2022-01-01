
#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define ff first
#define ss second
#define pb push_back
#define mkp make_pair
#define pii pair<int , int>
#define nl printf("\n") ;
#define pn printf("No\n") ;
#define py printf("YES\n") ;
#define fill(a , x) memset(a , x , sizeof(a)) ;
#define vvi vector<vector<int>>
#define vi vector<int>

const int mod = 1e9 + 7 , N = 4e6 + 2 ;

bool cmp(pii & a , pii & b){
    if(a.ss != b.ss) return a.ss < b.ss ;
    else return a.ff < b.ff ;
}

int modval(int n){ return n % mod ; }

int modadd(int a , int b){ return modval(modval(a) + modval(b)) ; }

int modsub(int a , int b){ return modval(modval(a) + modval(modadd(mod , -b) + mod)) ; }

int modmul(int a , int b){ return modval(modval(a) * modval(b)) ; }


void count_subarrays(){
    string s[2] ; 
    for(int i = 0 ; i < 2 ;i++ ) cin >> s[i] ;
    int n = s[0].length() ;
    int dp[2][n] ;
    for(int i = 0 ; i < n ; i ++) dp[0][i] = mod , dp[1][i] = mod ;
    for(int i = 0 ; i < 2 ; i ++) dp[i][0] = s[i][0]=='#' ? dp[i][0] : 0 ;
    for(int i = 1 ; i < n ; i ++){
        for(int j = 0 ; j < 2 ; j ++){
            for(int l = 0 ; l < 2 ; l ++){
                if(s[j][i]!='#'){
                    dp[j][i] = min(dp[j][i] , dp[l][i-1] + (j!=l)) ;
                }
            }
            if(s[j][i]!='#')dp[j][i] = min(dp[j^1][i] + 1 , dp[j][i]) ;  
        }
    }
    int ans = min(dp[0][n-1] , dp[1][n-1]) ;
    if(ans==mod) pn 
    else printf("Yes\n%lld\n",ans) ;
}

int32_t main() {
	int t = 1 ;
	scanf("%lld",&t) ;
	while(t--) count_subarrays() ;
	return 0;
}



