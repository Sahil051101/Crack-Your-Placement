#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    void helper(int ind,vector<vector<int>> &res,vector<int> &ds,vector<int> candidates, int target ) {
        if( target==0 )
        {
            res.push_back(ds) ;
            return ;
        }
        for( int i=ind ; i<candidates.size() ; i++ )
        {
            if( i>ind && candidates[i]==candidates[i-1] )
                continue ;
            if( candidates[i]>target )
                return ;
            ds.push_back(candidates[i]) ;
            helper(i+1,res,ds,candidates,target-candidates[i]) ;
            ds.pop_back() ;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end()) ;
        vector<vector<int>> res ;
        vector<int> ds ;
        helper(0,res,ds,candidates,target) ;
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
    vector<int> candidates(N) ;
    for( int i=0 ; i<N ; i++ )
        cin>>candidates[i] ;
    int target ;
    cin>>target ;
    Solution res ;
    vector<vector<int>> ans = res.combinationSum2(candidates,target) ;
    for( auto vec : ans )
    {
        for( int x : vec )
            cout<<x<<" " ;
        cout<<"\n" ;
    }
    return 0 ;
}