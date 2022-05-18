#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    int gettingn( int n )
    {
        int res = 0 ;
        while( n>0 )
        {
            res += (n%10)*(n%10) ;
            n/=10 ;
        }
        return res ;
    }
    bool isHappy(int n) {
        int slow = n , fast = n ;
        while(1)
        {
            slow = gettingn( slow ) ;
            fast = gettingn( gettingn(fast) ) ;
            
            if( fast==1 )
                return true ;
            if( fast==slow )
                break ;
        }
        return false ;
    }
};
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int N ;
    cin>>N ;
    Solution res ;
    cout<<res.isHappy(N) ;
    return 0 ;
}