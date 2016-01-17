class Solution {
public:
    int mySqrt(int x) {
		if( x < 2)
			return x;
		int s = 1, e = x, mid;
		int r;
		while( s <= e)
		{
			mid = (( e - s)>>1) + s;
			
			if( mid == x / mid)
				return mid;
			if( mid < x / mid)
			{
				s = mid + 1;
				continue;
			}
			e = mid - 1;
		}

		return e;
    }
};

/**
*
*binary search
*
*
*/

