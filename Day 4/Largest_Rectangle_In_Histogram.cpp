#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    int largestRectangleArea(vector<int>& heights) {
        int N = heights.size() ;
        stack<int> st ;
        vector<int> left(N) , right(N) ;
        for( int i=0 ; i<N ; i++ )
        {
            while( !st.empty() && heights[st.top()]>=heights[i] )
                st.pop() ;
            if( st.empty() )
                left[i] = -1 ;
            else
                left[i] = st.top() ;
            st.push(i) ;
        }
        while( !st.empty() )
            st.pop() ;
        for( int i=N-1 ; i>=0 ; i-- )
        {
            while( !st.empty() && heights[st.top()]>=heights[i] )
                st.pop() ;
            if( st.empty() )
                right[i] = N ;
            else
                right[i] = st.top() ;
            st.push(i) ;
        }
        while( !st.empty() )
            st.pop() ;
        int res = 0 ;
        for( int i=0 ; i<N ; i++ )
            res = max(res,(right[i]-left[i]-1)*heights[i] ) ;
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
    vector<int> heights(N) ;
    for( int i=0 ; i<N ; i++ )
        cin>>heights[i] ;
    Solution res ;
    cout<<res.largestRectangleArea(heights) ;
    return 0 ;
}