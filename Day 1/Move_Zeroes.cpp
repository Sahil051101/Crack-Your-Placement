#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    void moveZeroes(vector<int>& nums) {
        int j=0 ;
        for( int i=0 ; i<nums.size() ; i++ )
            if( nums[i]!=0 )
                swap( nums[i] , nums[j++] ) ;
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
    res.moveZeroes(nums) ;
    for( int i=0 ; i<N ; i++ )
        cout<<nums[i]<<" " ;
    return 0 ;
}