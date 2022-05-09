#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res ;
        for( int i=0 ; i<nums.size() ; i++ )
        {
            if( nums[abs(nums[i])-1]<0 )
                res.push_back(abs(nums[i])) ;
            nums[abs(nums[i])-1]*=-1 ;
        }
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
    Solution res ;
    vector<int> ans = res.findDuplicates(nums) ;
    for( int x : ans )
        cout<<x<<" " ;
    return 0 ;
}