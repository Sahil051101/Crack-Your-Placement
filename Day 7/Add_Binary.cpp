#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    string addBinary(string a, string b) {
        
        string res ;
        int x = a.size()-1 , y = b.size()-1 ;
        int sum=0 , carry=0 ;
        
        while( x>=0 || y>=0 )
        {
            sum = carry ;
            if( x>=0 )
            {
                sum = sum + a[x] - '0' ;
                x-- ;
            }
            if( y>=0 )
            {
                sum = sum + b[y] - '0' ;
                y-- ;
            }
            res += to_string(sum%2) ;
            carry = sum>1 ? 1 : 0 ;
        }
        if( carry!=0 )
            res += to_string(carry) ;
        reverse( res.begin() , res.end() ) ;
        return res ;
    }
};
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    string a , b ;
    cin>>a>>b ;
    Solution res ;
    cout<<res.addBinary(a,b) ;
    return 0 ;
}