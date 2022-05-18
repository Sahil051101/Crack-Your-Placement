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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode *dummy = new ListNode(-1) ;
        dummy->next = head ;
        ListNode *base = dummy , *prebase ;
        for( int i=0 ; i<left ; i++ )
        {
            prebase = base ;
            base = base->next ;
        }
        ListNode *prev = base , *curr = base->next , *nextnode ;
        for( int i=0 ; i<right-left ; i++ )
        {
            nextnode = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = nextnode ;
        }
        prebase->next = prev ;
        base->next = curr ;
        return dummy->next ;
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
    int left , right ;
    cin>>left>>right ;
    Solution res ;
    ListNode *node = res.reverseBetween(head,left,right) ;
    while( node )
    {
        cout<<node->val<<" " ;
        node = node->next ;
    }
    return 0 ;
}