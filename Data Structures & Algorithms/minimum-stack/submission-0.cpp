class MinStack {
    stack<pair<int,int>> stk;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(stk.empty()){
            stk.push({val, val});
        }
        else{
            int minimum = min(val, stk.top().second);
            stk.push({val, minimum});
        }
    }
    
    void pop() {
        if(!stk.empty()){
            stk.pop();
        }
    }
    
    int top() {
        if(!stk.empty()){
            return stk.top().first;
        }
    }
    
    int getMin() {
        if(!stk.empty()){
            return stk.top().second;
        }
    }
};
