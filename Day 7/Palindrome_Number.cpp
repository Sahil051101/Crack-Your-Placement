#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    bool isPalindrome(int x) {
        if( x<0 )
            return false ;
        long long int n=x , res=0 ;
        while( n )
        {
            int rem = n%10 ;
            res = res*10 + rem ;
            n/=10 ;
        }
        if( res==x )
            return true ;
        return false ;
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
    cout<<res.isPalindrome(n) ;
    return 0 ;
}