class Solution {
public:
    bool isUgly(int num) {
		
		if( num < 1)
			return false;

		while( num )
		{
			if( num % 2 )
				break;

			num /= 2;			
		}
		if( num == 1)
			return true;
		while( num )
		{
			if( num % 3 )
				break;

			num /= 3;		
		}
		if( num == 1)
			return true;
		while( num )
		{
			if( num % 5 )
				break;

			num /= 5;		
		}
		if( num == 1)
			return true;

		return false;
		
        
    }
};

