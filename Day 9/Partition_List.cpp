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
    ListNode* partition(ListNode* head, int x) {
        if( !head || !head->next )
            return head ;
        ListNode *temp = head ;
        ListNode *small = new ListNode(-1) , *big = new ListNode(-1) ;
        ListNode *movesmall = small , *movebig = big ;
        while( temp )
        {
            if( temp->val<x )
            {
                movesmall->next = temp ;
                movesmall = movesmall->next ;
            }
            else
            {
                movebig->next = temp ;
                movebig = movebig->next ;
            }
            temp = temp->next ;
        }
        movesmall->next = big->next ;
        movebig->next = NULL ;
        return small->next ;
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
    int value ;
    cin>>value ;
    Solution res ;
    ListNode *node = res.partition(head,value) ;
    while( node )
    {
        cout<<node->val<<" " ;
        node = node->next ;
    }
    return 0 ;
}