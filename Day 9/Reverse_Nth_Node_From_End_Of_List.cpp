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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head ;
        while( n-- )
            temp = temp->next ;
        if( temp==NULL )
            return head->next ;
        ListNode *del = head ;
        while( temp->next )
        {
            temp = temp->next ;
            del = del->next ;
        }
        temp = del->next ;
        del->next = temp->next ;
        delete temp ;
        return head ;
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
    int del ;
    cin>>del ;
    Solution res ;
    ListNode *node = res.removeNthFromEnd(head,del) ;
    while( node )
    {
        cout<<node->val<<" " ;
        node = node->next ;
    }
    return 0 ;
}