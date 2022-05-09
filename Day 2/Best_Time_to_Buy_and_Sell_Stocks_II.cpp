#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    int maxProfit(vector<int>& prices) {
        int res = 0 ;
        for( int i=1 ; i<prices.size() ; i++ )
            res += max(prices[i]-prices[i-1],0) ;
        return res ;
    }
} ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int N ;
    cin>>N ;
    vector<int> prices(N) ;
    for( int i=0 ; i<N ; i++ )
        cin>>prices[i] ;
    Solution res ;
    cout<<res.maxProfit(prices) ; 
    return 0 ;
}