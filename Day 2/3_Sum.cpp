#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        vector<vector<int>> res ;
        if( nums.size()<3 )
            return res ;
        for( int i=0 ; i<nums.size()-2 ; i++ )
        {
            if( nums[i]>0 )
                break ;
            if( i>0 && nums[i]==nums[i-1] )
                continue ;
            int remsum = -nums[i] ;
            int beg = i+1 , end = nums.size()-1 ;
            while( beg<end )
            {
                if( nums[beg]+nums[end] > remsum )
                    end-- ;
                else if( nums[beg]+nums[end] < remsum )
                    beg++ ;
                else
                {
                    res.push_back({nums[i],nums[beg],nums[end]}) ;
                    while( beg<end && nums[beg]==nums[beg+1] )
                        beg++ ;
                    while( beg<end && nums[end]==nums[end-1] )
                        end-- ;
                    beg++ ;
                    end-- ;
                }
            }
        }
        return res ;
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
    vector<vector<int>> ans = res.threeSum(nums) ;
    for( int i=0 ; i<ans.size() ; i++ )
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<"\n" ;
    return 0 ;
}