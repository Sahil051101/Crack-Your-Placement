#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    int removeDuplicates(vector<int>& nums) {
        if( nums.size()==0 )
            return 0 ;
        int j=0 ;
        for( int i=0 ; i<nums.size() ; i++ )
            if( nums[i]!=nums[j] )
                nums[++j] = nums[i] ;
        return j+1 ;
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
    cout<<res.removeDuplicates(nums)<<"\n" ;
    return 0 ;
}