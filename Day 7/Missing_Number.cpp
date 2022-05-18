#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int all=nums.size() , rem=0 ;
        for( int i=0 ; i<nums.size() ; i++ )
        {
            all^=i ;
            rem^=nums[i] ;
        }
        return all^rem ;
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
    cout<<res.missingNumber(nums) ;
    return 0 ;
}