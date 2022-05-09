#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    int subarraysDivByK(vector<int>& nums, int k) {
        // int N = nums.size() ;
        // vector<int> prefix(N+1) ;
        // prefix[0] = 0 ;
        // for( int i=0 ; i<N ; i++ )
        //     prefix[i+1] = prefix[i]+nums[i] ;
        // int res = 0 ;
        // for( int i=0 ; i<N+1 ; i++ )
        //     for( int j=i+1 ; j<N+1 ; j++ )
        //         if( (prefix[j]-prefix[i])%k==0 )
        //             res++ ;
        // return res ;
        
        int res = 0 ;
        vector<int> remfreq(k) ;
        remfreq[0] = 1 ;
        int prefix = 0 ;
        for( int i=0 ; i<nums.size() ; i++ )
        {
            prefix = (prefix + nums[i]%k + k)%k ;
            res += remfreq[prefix] ;
            remfreq[prefix]++ ;
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
    int k ;
    cin>>k ;
    Solution res ;
    cout<<res.subarraysDivByK(nums,k) ;
    return 0 ;
}