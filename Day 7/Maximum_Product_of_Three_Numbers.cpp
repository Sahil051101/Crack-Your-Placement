#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    int maximumProduct(vector<int>& nums) {
        int min1 = INT_MAX , min2 = INT_MAX ;
        int max1 = INT_MIN , max2 = INT_MIN , max3 = INT_MIN ;
        for( int x : nums )
        {
            if( min1>x )
            {
                min2 = min1 ;
                min1 = x ;
            }
            else if( min2>x )
                min2 = x ;
            
            if( max1<x )
            {
                max3 = max2 ;
                max2 = max1 ;
                max1 = x ;
            }
            else if( max2<x )
            {
                max3 = max2 ;
                max2 = x ;
            }
            else if( max3<x )
                max3 = x ;
        }
        return max(min1*min2*max1 , max1*max2*max3) ;
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
    cout<<res.maximumProduct(nums) ;
    return 0 ;
}