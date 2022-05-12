#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    void helper( int ind , set<vector<int>> &res , vector<int> &nums ) {
        if( ind==nums.size() )
        {
            res.insert(nums) ;
            return ;
        }
        for( int i=ind ; i<nums.size() ; i++ )
        {
            swap( nums[i] , nums[ind] ) ;
            helper(ind+1,res,nums) ;
            swap( nums[i] , nums[ind] ) ;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> res ;
        helper(0,res,nums) ;
        vector<vector<int>> ans ;
        for( vector<int> vec : res )
            ans.push_back(vec) ;
        return ans ;
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
    vector<vector<int>> ans = res.permuteUnique(nums) ;
    for( auto vec : ans )
    {
        for( auto x : vec )
            cout<<x<<" " ;
        cout<<"\n" ;
    }
    return 0 ;
}