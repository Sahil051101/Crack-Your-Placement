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
        ListNode *dummy = new ListNode(-1) ;
        dummy->next = head ;
        ListNode *temp = dummy ;
        while( head )
        {
            if( head->next && (head->val==head->next->val) )
            {
                while( head->next && (head->val==head->next->val) )
                    head = head->next ;
                temp->next = head->next ;    
            }       
            else
                temp = temp->next ;
            head = head->next ;
        }
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
    Solution node ;
    head = node.deleteDuplicates(head) ;
    while( head )
    {
        cout<<head->val<<" " ;
        head = head->next ;
    }
    return 0 ;
}