#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;
        int val = INT_MAX ;
        for( int i=0 ; i<prices.size() ; i++ )
        {
            val = min( val , prices[i] ) ;
            profit = max(profit,prices[i]-val) ;
        }
        return profit ;
    }
} ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int N ;
    cin>>N ;
    vector<int> nums(N) ;
    for( int i=0 ; i<N ; i++ )
        cin>>nums[i] ;
    Solution res ;
    cout<<res.maxProfit(nums) ;
    return 0 ;
}