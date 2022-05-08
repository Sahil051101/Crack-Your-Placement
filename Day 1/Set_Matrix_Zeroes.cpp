#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size() ;
        int col = matrix[0].size() ;
        bool firstcol = false ;
        for( int i=0 ; i<row ; i++ )
        {
            if( matrix[i][0]==0 )
                firstcol = true ;
            for( int j=1 ; j<col ; j++ )
                if( matrix[i][j]==0 )
                {
                    matrix[0][j] = 0 ;
                    matrix[i][0] = 0 ;
                }
        }
        for( int i=1 ; i<row ; i++ )
            for( int j=1 ; j<col ; j++ )
                if( matrix[i][0]==0 || matrix[0][j]==0 )
                    matrix[i][j] = 0 ;
        if( matrix[0][0]==0 )
            for( int i=0 ; i<col ; i++ )
                matrix[0][i] = 0 ;
        if( firstcol )
            for( int i=0 ; i<row ; i++ )
                matrix[i][0] = 0 ;
    }
} ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int n , m ;
    cin>>n>>m ;
    vector<vector<int>> matrix(n,vector<int> (m)) ;
    for( int i=0 ; i<n ; i++ )
        for( int j=0 ; j<m ; j++ )
            cin>>matrix[i][j] ;
    Solution res ;
    res.setZeroes(matrix) ;
    for( int i=0 ; i<n ; i++ )
    {
        for( int j=0 ; j<m ; j++ )
            cout<<matrix[i][j]<<" " ;
        cout<<"\n" ;
    }
    return 0 ;
}