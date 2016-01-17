class Stack {
public:
	queue<int> s1, s2;
    // Push element x onto stack.
    void push(int x) {
    	if( s1.empty() && s2.empty())
			s1.push(x);
		else if( s1.empty())
			s2.push(x);
		else
			s1.push(x);
			
    }

    // Removes the element on top of the stack.
    void pop() {
    	if( s2.empty())
    		popTop(s1, s2);
		else
			popTop(s2, s1);
        
    }

    // Get the top element.
    int top() {
        if( s1.empty())
			return getTop(s2, s1);
		else
			return getTop(s1, s2);
    }

	int getTop(queue<int>& out, queue<int>& in)
	{
		int a = out.front();
		out.pop();
		
		while(!out.empty())
		{
			in.push(a);
			a = out.front();
			out.pop();			
			 
		}

		in.push(a);
		
		return a;		
	}

	void popTop(queue<int>& out, queue<int>& in)
	{
		int a = out.front();
		out.pop();
		
		while(!out.empty())
		{
			in.push(a);
			a = out.front();
			out.pop();			
			 
		}
	}

    // Return whether the stack is empty.
    bool empty() {
    	return s1.empty() && s2.empty();
        
    }
};

