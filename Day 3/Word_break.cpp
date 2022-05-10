#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for( int i=0 ; i<board.size() ; i++ )
            for( int j=0 ; j<board[0].size() ; j++ )
                if( helper(board,i,j,word) )
                    return true ;
        return false ;
    }
    bool helper( vector<vector<char>> &board , int i , int j , string word )
    {
        if( word.size()==0 )
            return true ;
        if( i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[0] )
            return false ;
        char c = board[i][j] ;
        board[i][j] = '*' ;
        if( helper(board,i-1,j,word.substr(1)) || helper(board,i+1,j,word.substr(1)) || helper(board,i,j-1,word.substr(1)) || helper(board,i,j+1,word.substr(1)) )
            return true ;
        board[i][j] = c ;
        return false ;
    }
} ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int N , M ;
    cin>>N>>M ;
    vector<vector<char>> board(N,vector<char> (M)) ;
    for( int i=0 ; i<N ; i++ )
    for( int j=0 ; j<M ; j++ )
    cin>>board[i][j] ;
    string word ;
    cin>>word ;
    Solution res ;
    cout<<res.exist(board,word) ;
    return 0 ;
}