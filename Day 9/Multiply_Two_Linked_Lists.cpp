#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public :
    long long mod = 1e9 + 7 ;
    long long  multiplyTwoLists (ListNode* l1, ListNode* l2)
    {
        long long n1=0 , n2=0 ;
        while( l1 || l2 ) 
        {
            if( l1 )
            {
                n1 = (n1*10)%mod + l1->val ;
                l1 = l1->next ;
            }
            if( l2 )
            {
                n2 = (n2*10)%mod + l2->val ;
                l2 = l2->next ;
            }
        }
        return ((n1%mod)*(n2%mod))%mod ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    int n ;
    cin>>n ;
    ListNode *head  = new ListNode(0);
    ListNode *temp = head ;
    for( int i=0 ; i<n ; i++ )
    {
        int x ;
        cin>>x ;
        temp->next = new ListNode(x) ;
        temp = temp->next ;
    }
    head = head->next ;
    int n2 ;
    cin>>n2 ;
    ListNode *head2  = new ListNode(0);
    ListNode *temp2 = head2 ;
    for( int i=0 ; i<n2 ; i++ )
    {
        int x ;
        cin>>x ;
        temp2->next = new ListNode(x) ;
        temp2 = temp2->next ;
    }
    head2 = head2->next ;
    Solution res ;
    cout<<res.multiplyTwoLists(head,head2) ;
    return 0 ;
}