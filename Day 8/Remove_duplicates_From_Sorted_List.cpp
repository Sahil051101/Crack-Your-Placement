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
    ListNode* deleteDuplicates(ListNode* head) {
        if( !head || !head->next )
            return head ;
        ListNode *newhead = deleteDuplicates(head->next) ;
        if( newhead->val==head->val )
            head->next = newhead->next ;
        return head ;
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
    Solution res ;
    ListNode *node = res.deleteDuplicates(head) ;
    while( node )
    {
        cout<<node->val<<" " ;
        node = node->next ;
    }
    return 0 ;
}