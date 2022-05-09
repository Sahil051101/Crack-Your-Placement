#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash ;
        for( int i=0 ; i<nums.size() ; i++ )
        {
            if( hash.find(target-nums[i])!=hash.end() )
                return {i,hash[target-nums[i]]} ;
            hash[nums[i]] = i ;
        }
        return {} ;
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
    int target ;
    cin>>target ;
    Solution res ;
    vector<int> result = res.twoSum(nums,target) ;
    cout<<nums[result[0]]<<" "<<nums[result[1]] ;
    return 0 ;
}