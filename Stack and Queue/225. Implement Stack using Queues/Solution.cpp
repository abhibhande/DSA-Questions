class MyStack {
public:
    int size;
    queue<int> q;

    MyStack() {
        size=0;
    }
    
    void push(int x) {
        
        q.push(x);
        for(int i=0;i<size;i++)
        {
            q.push(q.front());
            q.pop();
        }
        size++;
    }
    
    int pop() {
        if(size > 0)
        {
            size--;
            int temp=q.front();
            q.pop();
            return temp;
        }
        return -1;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(size == 0)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */