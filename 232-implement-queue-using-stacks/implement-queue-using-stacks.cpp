class MyQueue {
    stack<int> stack1;
    stack<int> stack2;
    
public:
    MyQueue() {
        // No need to initialize explicitly in C++
    }
    
    void push(int x) {
        while (!stack2.empty()) {
            stack1.push(stack2.top());
            stack2.pop();
        }
        stack2.push(x);
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        } 
    }
    
    int pop() {
        int val = stack2.top();
        stack2.pop();
        return val;
    }
    
    int peek() {
        return stack2.top();
    }
    
    bool empty() {
        return stack2.empty();
    }
};
