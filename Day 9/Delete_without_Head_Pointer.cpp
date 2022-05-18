#include<bits/stdc++.h>
using namespace std ;

struct Node {
    int data ;
    struct Node *next ;
    Node(int x) {
        int data = x ;
        next = NULL ;
    }
} ;
class Solution
{
public:
    void deleteNode(Node *del)
    {
       Node *temp = del->next ;
       swap(temp->data,del->data) ;
       del->next = temp->next ;
       delete temp ;
    }
};
