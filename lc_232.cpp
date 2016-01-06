class Queue {
public:
	stack<int> s0;
	stack<int> s1;
    // Push element x to the back of queue.
    void push(int x) {
    	s0.push(x);
        
    }

    // Removes the element from in front of queue.
    void pop(void) {
    	if( !s1.empty())
    	{
    		s1.pop();
			return;
    	}
    	while(!s0.empty())
    	{
    		s1.push(s0.top());
			s0.pop();
    	}
		s1.pop();
    }

    // Get the front element.
    int peek(void) {
    	if( !s1.empty())
			return s1.top();
		
    	while(!s0.empty())
    	{
    		s1.push(s0.top());
			s0.pop();
    	}
		return s1.top();
        
    }

    // Return whether the queue is empty.
    bool empty(void) {
    	return s0.empty() && s1.empty();
        
    }
};

