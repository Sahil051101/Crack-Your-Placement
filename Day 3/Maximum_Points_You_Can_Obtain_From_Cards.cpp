#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int N = nums.size() ;
        vector<int> prefix(N+1) ;
        prefix[0] = 0 ;
        for( int i=0 ; i<N ; i++ )
            prefix[i+1] = prefix[i] + nums[i] ;
        int totalsum = prefix.back() ;
        int res = 0 ;
        for( int i=0 ; i<k+1 ; i++ )
            res = max(res , totalsum-prefix[i+N-k]+prefix[i] ) ;
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
    vector<int> nums(N) ;
    for( int i=0 ; i<N ; i++ )
        cin>>nums[i] ;
    int k ;
    cin>>k ;
    Solution res ;
    cout<<res.maxScore(nums,k) ;
    return 0 ;
}