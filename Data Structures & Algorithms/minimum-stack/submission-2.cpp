class MinStack {
public:
stack <int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int>temp=st;
        vector<int>vt;
        while(!temp.empty())
        {
            vt.push_back(temp.top());
            temp.pop();
        }
        int min=*min_element(vt.begin(), vt.end());
        return min;
    }
};
