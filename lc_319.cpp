/**
*so all number have even number of factors except square number(e.g: factor of 9:1,3,9).
*square number must turn on because of odd number of factors(9: turn on at 1st, off at 3rd, 
*on at 9th) other number must turn off(6: turn on at 1st, off at 2nd, on at 3rd, off at 6th) 
*so we only need to compute the number of square number less equal than n

*/

class Solution {
public:
    int bulbSwitch(int n) {
		int i = 1;
		int count = 0;
		for(;i<=sqrt(n)+1;++i)
		{
			if( i*i <= n)
				++count;
			else
				break;
		}
		
        return count;
    }
};

