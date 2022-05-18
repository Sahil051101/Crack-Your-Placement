#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    bool isPowerOfTwo(int n) {
        double val = log2(n) ;
        return abs(val-round(val))<1e-10 ;
    }
} ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int n ;
    cin>>n ;
    Solution res ;
    cout<<res.isPowerOfTwo(n) ;
    return 0 ;
}