#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    int reverse(int x) {
        
        int sign = 0 ;
        if( x<0 )
            sign = 1 ;
        
        int absolute = abs(x) ;
        long int result = 0 ;
        
        while( absolute>0 )
        {
            int rem = absolute%10 ;
            if( result*10>INT_MAX )
                return 0 ;
            
            result = result*10 + rem ;
            absolute/=10 ;
        }
        if( sign==1 )
            return -result ;
        return result ;
    }
};
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int n ;
    cin>>n ;
    Solution res ;
    cout<<res.reverse(n) ;
    return 0 ;
}