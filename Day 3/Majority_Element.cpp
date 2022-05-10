#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    int majorityElement(vector<int>& nums) {
        int cnt = 0 ;
        int cand = 0 ;
        for( int i=0 ; i<nums.size() ; i++ )
        {
            if( cnt==0 )
                cand = nums[i] ;
            cnt += (nums[i]==cand)?1:-1 ;
        }
        return cand ;
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
    cout<<res.majorityElement(nums) ;
    return 0 ;
}