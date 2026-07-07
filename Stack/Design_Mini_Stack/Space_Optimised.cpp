#include <stack>

class MinStack {
public:
   std::stack<long long int> s;
   long long int minVal;
    MinStack() {
        
    }
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            minVal=val;
        }
        else
        {
            if(val<minVal)
            {
                s.push((long long)2*val-minVal);
                minVal=val;
            }
            else
            {
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.top()<minVal)
        {
            minVal=2*minVal-s.top(); // old min assign
        }
        s.pop(); // then delete element
      }
    
    int top() {
        if(s.top()<minVal)
        {
            return minVal;
        }
        return s.top();
    }
    
    int getMin() {
        return minVal;
    }
};