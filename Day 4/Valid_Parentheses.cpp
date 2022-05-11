#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    bool isValid(string s) {
        stack<char> st ;
        for( int i=0 ; i<s.size() ; i++ )
        {
            if( s[i]=='(' || s[i]=='{' || s[i]=='[' )
                st.push(s[i]) ;
            else
            {
                if( !st.empty() && st.top()=='(' && s[i]==')' )
                    st.pop() ;
                else if( !st.empty() && st.top()=='{' && s[i]=='}' )
                    st.pop() ;
                else if( !st.empty() && st.top()=='[' && s[i]==']' )
                    st.pop() ;
                else
                    return false ;
            }
        }
        if( st.empty() )
            return true ;
        return false ;
    }
} ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    string s ;
    cin>>s ;
    Solution res ;
    cout<<res.isValid(s) ;
    return 0 ;
}