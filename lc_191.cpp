class Solution {
public:
    int hammingWeight(uint32_t n) {
		int i = 0;
		while( n & ( ~(n-1)))
		{	
			++i;
			n -= ( n & (~(n-1)));
		}
		return i;
        
    }
};

