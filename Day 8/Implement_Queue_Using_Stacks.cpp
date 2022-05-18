#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

class MyQueue {
public:
    stack<int> st1 , st2 ;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x) ;
    }
    
    int pop() {
        while( st1.size()>1 )
        {
            st2.push(st1.top()) ;
            st1.pop() ;
        }
        int x = st1.top() ;
        st1.pop() ;
        while( st2.size() )
        {
            st1.push(st2.top()) ;
            st2.pop() ;
        }
        return x ;
    }
    
    int peek() {
        while( st1.size()>1 )
        {
            st2.push(st1.top()) ;
            st1.pop() ;
        }
        int x = st1.top() ;
        while( st2.size() )
        {
            st1.push(st2.top()) ;
            st2.pop() ;
        }
        return x ;
    }
    
    bool empty() {
        return st1.empty() ;
    }
};

int main() {
    cout<<"Working" ;
}