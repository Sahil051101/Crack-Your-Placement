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
    ListNode* reverseList(ListNode *head) {
        ListNode *prev = NULL , *curr = head ;
        while( curr )
        {
            ListNode *nextnode = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = nextnode ;
        }
        return prev ;
    }
    void reorderList(ListNode* head) {
        if( !head || !head->next )
            return ;
        ListNode *fast = head , *slow = head ;
        ListNode *prev = slow ;
        while( fast && fast->next )
        {
            prev = slow ;
            fast = fast->next->next ;
            slow = slow->next ;
        }
        if( fast )
        {
            prev = prev->next ;
            slow = slow->next ;
        }
        prev->next = NULL ;
        slow = reverseList(slow) ;
        while( head && slow )
        {
            ListNode *first = head->next ;
            ListNode *second = slow->next ;
            head->next = slow ;
            slow->next = first ;
            head = first ;
            slow = second ;
        }
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
    Solution node ;
    node.reorderList(head) ;
    while( head )
    {
        cout<<head->val<<" " ;
        head = head->next ;
    }
    return 0 ;
}