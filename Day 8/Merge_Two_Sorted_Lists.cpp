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
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if( !list1 )
            return list2 ;
        if( !list2 )
            return list1 ;
        if( list1->val<list2->val )
            list1->next = mergeTwoLists(list1->next,list2) ;
        else
        {
            list2->next = mergeTwoLists( list1 , list2->next ) ;
            list1 = list2 ;
        }
        return list1 ;
    }
} ;

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
    ListNode *node = res.mergeTwoLists(head,head2) ;
    while( node )
    {
        cout<<node->val<<" " ;
        node = node->next ;
    }
    return 0 ;
}