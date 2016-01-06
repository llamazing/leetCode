class Solution {
public:
    int climbStairs(int n) {
		
		if( n < 3)
			return n;
		
		int i = 3;
		
		int a = 1;
		int b = 2;
		int result;

		for(; i <= n; ++i)
		{
			result = a + b;
			a = b;
			b = result;
		}

		return result;
        
    }
};

