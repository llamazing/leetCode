class Solution {
public:
    bool isPalindrome(int x) {
		if( x < 0)
			return false;
		if( x < 10 )
			return true;
		int temp = x;
		long long int mult  = 1;
		do
		{
			temp /= 10;
			mult *= 10;
		}while( temp );
		
		mult /= 10;
		int high, low;
		while(x && mult)
		{
			high = x / mult;
			low = x % 10;
			if( low != high)
				return false;
			x = x - high*mult;
			x /= 10;
			mult /= 100;
		}
		return true;
        
    }
};

/**
*a palindrome should be non-negative
*
*/
