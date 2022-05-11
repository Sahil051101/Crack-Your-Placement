#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    int findMaxValueOfEquation(vector<vector<int>>& nums, int k) {
        deque<int> d ;
        int res = INT_MIN ;
        for( int i=0 ; i<nums.size() ; i++ )
        {
            while( !d.empty() && nums[i][0]-nums[d.front()][0]>k )
                d.pop_front() ;
            if( !d.empty() )
                res=max(res,nums[d.front()][1]-nums[d.front()][0]+nums[i][0]+nums[i][1]) ;
            while(!d.empty() && 
                nums[d.back()][1]-nums[d.back()][0]<nums[i][1]-nums[i][0] )
                d.pop_back() ;
            d.push_back(i) ;
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
    vector<vector<int>> nums(N, vector<int> (2)) ;
    for( int i=0 ; i<N ; i++ )
        cin>>nums[i][0]>>nums[i][1] ;
    int k ;
    cin>>k ;
    Solution res ;
    cout<<res.findMaxValueOfEquation(nums,k) ;
    return 0 ;
}