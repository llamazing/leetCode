class Solution {
public:
    int romanToInt(string s) {
		string::iterator itr = s.begin();
		int result = 0;
		for(;itr != s.end(); ++itr)
		{
			switch(*itr)
			{
				case'I':
					if( (itr +1 ) == s.end())
						result += 1;
					else if( *(itr+1) == 'V')
					{
						++itr;
						result += 4;
					}
					else if(*(itr + 1) == 'X')
					{
						++itr;
						result += 9;
					}
					else
						result += 1;
					break;
				case'V':
					result += 5;
					break;
				case'X':
					if( (itr +1 ) == s.end())
						result += 10;
					else if( *(itr+1) == 'L')
					{
						++itr;
						result += 40;
					}
					else if(*(itr + 1) == 'C')
					{
						++itr;
						result += 90;
					}
					else
						result += 10;
					
					break;
				case'L':
					result += 50;
					break;
				case'C':
					if( (itr +1 ) == s.end())
						result += 100;
					else if( *(itr+1) == 'D')
					{
						++itr;
						result += 400;
					}
					else if(*(itr + 1) == 'M')
					{
						++itr;
						result += 900;
					}
					else
						result += 100;
					break;
				case'D':
					result += 500;
					break;
				case'M':
					result += 1000;
					break;
				
			}
		}

		return result;
        
    }
};
/**
*I 1
*V 5
*X 10
*L 50
*C 100
*D 500
*M 1000
*IV 4
*IX 9
*XL 40
*XC 90
*CD 400
*CM 900
*/

