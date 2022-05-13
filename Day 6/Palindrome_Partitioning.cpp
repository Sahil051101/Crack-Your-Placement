#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res ;
        vector<string> ds ;
        helper(0,s,ds,res) ;
        return res ;
    }
    void helper(int ind , string s , vector<string> &ds , vector<vector<string>> &res )
    {
        if( ind==s.size() )
        {
            res.push_back(ds) ;
            return ;
        }
        for( int i=ind ; i<s.size() ; i++ )
        {
            if( isPalindrome(s,ind,i) )
            {
                ds.push_back(s.substr(ind,i-ind+1)) ;
                helper(i+1,s,ds,res) ;
                ds.pop_back() ;
            }
        }
    }
    bool isPalindrome( string s , int start , int end )
    {
        while( start<end )
            if(s[start++]!=s[end--] )
                return false ;
        return true ;
    }
};
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    string s ;
    cin>>s ;
    Solution res ;
    vector<vector<string>> ans = res.partition(s) ;
    for( auto vec : ans )
    {
        for( auto str : vec )
            cout<<str<<" " ;
        cout<<"\n" ;
    }
    return 0 ;
}