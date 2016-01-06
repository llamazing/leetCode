class Solution {
public:
    string intToRoman(int num) {
		string result = "";
		int i = 0;
		while(num)
		{
			if( num / 1000 )
			{
				i = num / 1000;
				while(i)
				{
					--i;
					result.append("M");
				}
				num %= 1000;
				continue;
			}
			if( num / 900 )
			{
				i = num / 900;
				while(i)
				{
					--i;
					result.append("CM");
				}
				num %= 900;
				continue;
			}
			if( num / 500 )
			{
				i = num / 500;
				while(i)
				{
					--i;
					result.append("D");
				}
				num %= 500;
				continue;
			}
			if( num / 400 )
			{
				i = num / 400;
				while(i)
				{
					--i;
					result.append("CD");
				}
				num %= 400;
				continue;
			}

			if( num / 100 )
			{
				i = num / 100;
				while(i)
				{
					--i;
					result.append("C");
				}
				num %= 100;
				continue;
			}
			if( num / 90 )
			{
				i = num / 90;
				while(i)
				{
					--i;
					result.append("XC");
				}
				num %= 90;
				continue;
			}
			if( num / 50 )
			{
				i = num / 50;
				while(i)
				{
					--i;
					result.append("L");
				}
				num %= 50;
				continue;
			}
			if( num / 40 )
			{
				i = num / 40;
				while(i)
				{
					--i;
					result.append("XL");
				}
				num %= 40;
				continue;
			}
			if( num / 10 )
			{
				i = num / 10;
				while(i)
				{
					--i;
					result.append("X");
				}
				num %= 10;
				continue;
			}

			if( num / 9 )
			{
				i = num / 9;
				while(i)
				{
					--i;
					result.append("IX");
				}
				num %= 9;
				continue;
			}
			if( num / 5 )
			{
				i = num / 5;
				while(i)
				{
					--i;
					result.append("V");
				}
				num %= 5;
				continue;
			}
			if( num / 4 )
			{
				i = num / 4;
				while(i)
				{
					--i;
					result.append("IV");
				}
				num %= 4;
				continue;
			}
			if( num / 1 )
			{
				i = num / 1;
				while(i)
				{
					--i;
					result.append("I");
				}
				num %= 1;
				continue;
			}

		}

		return result;
        
    }
};

