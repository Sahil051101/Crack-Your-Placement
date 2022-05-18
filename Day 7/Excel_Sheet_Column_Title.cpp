#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string res="" ;
        while( columnNumber )
        {
            int rem = columnNumber%26 ;
            if( rem==0 )
            {
                res+='Z' ;
                columnNumber-- ;
            }
            else
                res += ('A'+rem-1) ;
            columnNumber /= 26 ;
        }
        reverse(res.begin(),res.end()) ;
        return res ;
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
    cout<<res.convertToTitle(N) ;
    return 0 ;
}