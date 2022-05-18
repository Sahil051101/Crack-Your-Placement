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
    bool backtrack( ListNode* &first , ListNode *last ) {
        if( last==NULL )
            return true ;
        if( backtrack(first,last->next) == false )
            return false ;
        bool match = false ;
        if( first->val==last->val )
        {
            match = true ;
            first = first->next ;
        }
        return match ;
    }
    bool isPalindrome(ListNode* head) {
        if( !head->next )
            return true ;
        return backtrack(head,head) ;
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
    cout<<res.isPalindrome(head) ;
    return 0 ;
}