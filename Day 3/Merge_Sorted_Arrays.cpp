#include<bits/stdc++.h>
using namespace std ;

class Solution {
public :
    void merge(vector<int>& nums1 , int m , vector<int>& nums2 , int n) {
        int i = m-1 , j = n-1 , k = m+n-1 ;
        while( i>=0 && j>=0 )
        {
            if( nums1[i]>nums2[j] )
            {
                nums1[k] = nums1[i] ;
                k-- ;
                i-- ;
            }
            else
            {
                nums1[k] = nums2[j] ;
                k-- ;
                j-- ;
            }
        }
        while( i>=0 )
            nums1[k--] = nums1[i--] ;
        while( j>=0 )
            nums1[k--] = nums2[j--] ;
    }
} ;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int k , m , n ;
    cin>>m>>n ;
    k = m+n ;
    vector<int> nums1(k,0) ;
    for( int i=0 ; i<m ; i++ )
        cin>>nums1[i] ;
    vector<int> nums2(n,0) ;
    for( int i=0 ; i<n ; i++ )
        cin>>nums2[i] ;
    Solution res ;
    res.merge(nums1,m,nums2,n) ;
    for( int i=0 ; i<k ; i++ )
    cout<<nums1[i]<<" " ;
    return 0 ;
}