#include <bits/stdc++.h>
using namespace std;

class MyQueue {
private:
    std::stack<int> st1;
    std::stack<int> st2;

    void rearrangeStacks() {
        if (st2.empty()) {
           while (!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
            } 
        }
    }
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        rearrangeStacks();
        int first = st2.top();
        st2.pop();
        return first;
    }
    
    int peek() {
        rearrangeStacks();
        return st2.top();
    }
    
    bool empty() {
        return st1.empty() && st2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
