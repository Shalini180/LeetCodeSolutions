class MinStack {
public:
    vector<int> a;
    vector<int> b;
    int minimum;
    MinStack() {
        vector<int> c;
        minimum=INT_MAX;
        a=c;
        b.push_back(minimum);
    }
    void push(int val) {
       if(b[b.size()-1]>=val){
           b.push_back(val);
           minimum=val;
       }
       a.push_back(val); 
    }
    
    void pop() {
        if(a[a.size()-1]==minimum){
            b.pop_back();
            minimum=b[b.size()-1];
        }
        a.pop_back();
    }
    
    int top() {
        if(a.size()>0)
            return a[a.size()-1];
        return -1;
    }
    
    int getMin() {
        return minimum;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
