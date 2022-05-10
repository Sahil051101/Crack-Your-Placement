#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int rem = nums[0] ;
        for( int i=1 ; i<nums.size() ; i++ )
        {
            if( rem==0 )
                return false ;
            rem = max(rem-1,nums[i]) ;
        }
        return true ;
    }
};
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
    cout<<res.canJump(nums) ;
    return 0 ;
}