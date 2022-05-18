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
    ListNode* reverseList(ListNode *head) {
        if( !head || !head->next )
            return head ;
        ListNode *prev = head , *curr = head , *nextnode ;
        while( curr )
        {
            nextnode = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = nextnode ;
        }
        head->next = NULL ;
        return prev ;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseList(l1) ;
        l2 = reverseList(l2) ;
        ListNode *res = new ListNode(0) ;
        ListNode *temp = res ;
        int sum = 0 ;
        while( l1 || l2 )
        {
            int val1=0 , val2=0 ;
            if( l1 )
            {
                val1 = l1->val ;
                l1 = l1->next ;
            }
            if( l2 )
            {
                val2 = l2->val ;
                l2 = l2->next ;
            }
            sum = sum+val1+val2 ;
            temp->next = new ListNode(sum%10) ;
            sum = sum/10 ;
            temp = temp->next ;
        }
        if( sum )
            temp->next = new ListNode(sum ) ;
        return reverseList(res->next) ;
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
    ListNode *node = res.addTwoNumbers(head,head2) ;
    while( node )
    {
        cout<<node->val<<" " ;
        node = node->next ;
    }
    return 0 ;
}