#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class Solution {
    public :
    int maxArea(vector<int>& height) {
        int left = 0 , right = height.size()-1 ;
        int resarea = 0 ;
        while( left<right )
        {
            int currarea = min(height[left],height[right])*(right-left) ;
            resarea = max( resarea , currarea ) ;
            if( height[left]<height[right] )
                left++ ;
            else
                right-- ;
        }
        return resarea ;
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
    cout<<res.maxArea(heights) ;
    return 0 ;
}