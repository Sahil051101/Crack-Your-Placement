#include<bits/stdc++.h>
using namespace std ;

#define ll long long int

class Solution {
    public :
    int findtheDuplicateNumber(vector<int> &nums)
    {
        int fast = nums[0] , slow = nums[0] ;
        do {
            fast = nums[nums[fast]] ;
            slow = nums[slow] ;
        } while( fast!=slow ) ;
        fast = nums[0] ;
        while( fast!=slow )
        {
            fast = nums[fast] ;
            slow = nums[slow] ;
        }
        return fast ;
    }
} ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int n ; 
    cin>>n ;
    vector<int> nums(n) ;
    for( int i=0 ; i<n ; i++ )
    cin>>nums[i] ;

    Solution res ;
    cout<<res.findtheDuplicateNumber(nums)<<"\n" ;
    return 0 ;
}