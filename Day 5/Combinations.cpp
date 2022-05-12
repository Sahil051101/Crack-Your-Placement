#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    void helper(int n, int k, int ind, vector<vector<int>> &res, vector<int> &ds ) {
        if( ds.size()==k )
        {
            res.push_back(ds) ;
            return ;
        }
        for( int i=ind ; i<=n ; i++ )
        {
            ds.push_back(i) ;
            helper(n,k,i+1,res,ds) ;
            ds.pop_back() ;
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res ;
        vector<int> ds ;
        helper(n,k,1,res,ds) ;
        return res ;
    }
};
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int n , k ;
    cin>>n>>k ;
    Solution res ;
    vector<vector<int>> ans = res.combine(n,k) ;
    for( auto vec : ans )
    {
        for( int x : vec )
            cout<<x<<" " ;
        cout<<"\n" ;
    }
    return 0 ;
}