#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
stack<long long> st;
long long min=-1;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            min= value;
            st.push(value);
        }
        else{
            if(min<value) st.push(value);
            else {
                st.push((long long)2*value-min);
                min=value;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long x= st.top();
        st.pop();
        if(x<min){
            min= 2*min-x;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        long long x= st.top();
        if(min<x) return x;
        return min;
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */