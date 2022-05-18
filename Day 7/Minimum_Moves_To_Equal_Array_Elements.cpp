#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int totalsum = 0 ;
        for( int i=0 ; i<nums.size() ; i++ )
            totalsum += nums[i] ;
        int minval = *min_element(nums.begin(),nums.end()) ;
        return totalsum - minval*nums.size() ;
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
    cout<<res.minMoves(nums) ;
    return 0 ;
}