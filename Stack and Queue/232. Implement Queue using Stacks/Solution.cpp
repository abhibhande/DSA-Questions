class MyQueue {
public:
    stack<int> st;
    int size=0;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> temp;
        while(!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        size++;
    }
    
    int pop() {
        if(size > 0)
        {
            size--;
            int temp=st.top();
            st.pop();
            return temp;
        }
        return -1;
    }
    
    int peek() {
       return st.top();
    }
    
    bool empty() {
        return (size==0);
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