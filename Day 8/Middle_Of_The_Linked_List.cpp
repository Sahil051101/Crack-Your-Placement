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
    ListNode* middleNode(ListNode* head) {
        ListNode *fast = head , *slow = head ;
        while( fast && fast->next )
        {
            fast = fast->next->next ;
            slow = slow->next ;
        }
        return slow ;
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
    Solution res ;
    cout<<res.middleNode(head)->val ;
    return 0 ;
}