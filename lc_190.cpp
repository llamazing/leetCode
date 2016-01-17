class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
		uint32_t result = 0, tmp, tra = 31;
		while(n)
		{
			tmp = n % 2;
			if( tmp )
			{
				result ^= (tmp << tra);
			}

			n /= 2;
			--tra;
		}
			
        return result;
    }
};

/**
*
*bit operation
*/

