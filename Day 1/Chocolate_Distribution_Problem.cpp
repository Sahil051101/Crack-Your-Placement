#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    long long findMinDiff(vector<long long> a, long long n, long long m) {
        sort( a.begin() , a.end() ) ;
        long long res = INT_MAX ;
        for( int i=0 ; i<=n-m ; i++ )
            res = min(res,a[i+m-1]-a[i] ) ;
        return res ;
    }
} ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    long long n , m ;
    cin>>n>>m ;
    vector<long long> a(n) ;
    for( int i=0 ; i<n ; i++ )
        cin>>a[i] ;
    Solution res ;
    cout<<res.findMinDiff(a,n,m) ;
    return 0 ;
}