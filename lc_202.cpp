class Solution {
public:

	int getNext( int n)
	{
		int result = 0;
		int temp;
		while( n )
		{
			temp = n % 10;
			result += temp * temp;
			n = n / 10;
		}
		return result;
	}
	
    bool isHappy(int n) {
		
		if( n <= 0)
			return false;
		
		int result = 1;
		
		while( n )
		{
			if( n == 1)
				return true;
			if( n == 4 )
				return false;
			n = getNext(n);
		}

		return false;        
    }
};

/**
* All non-happy numbers follow sequences that reach the cycle:
*4, 16, 37, 58, 89, 145, 42, 20, 4, ...
*/

