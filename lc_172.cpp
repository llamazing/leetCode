class Solution {
public:
    int trailingZeroes(int n) {
		int i = 5;
		long long int result = 0;
		while( i <= n )
		{
			result += n/i;
			n /= 5;
		}
		return result;
        
    }
};

/**
*the frequency of 2 is less than that of 5!!! 
*/
