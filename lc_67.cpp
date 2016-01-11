class Solution {
public:
    string addBinary(string a, string b) {
		int carry = 0;
		int ae = a.size() - 1, be  = b.size() - 1;
		int digit;
		char ch;
		string temp;
		while( ae >= 0 && be >= 0)
		{
			digit = a[ae] - '0' + b[be] - '0' + carry;
			if( digit  >= 2)
			{
				digit -= 2;
				carry = 1;
			}
			else
			{
				carry = 0;
			}
			ch = digit + '0';
			temp.push_back(ch);
			--ae;
			--be;
		}
		while( ae >= 0)
		{
			digit = a[ae] - '0'  + carry;
			if( digit  >= 2)
			{
				digit -= 2;
				carry = 1;
			}
			else
			{
				carry = 0;
			}
			ch = digit + '0';
			temp.push_back(ch);
			//carry = 0;
			--ae;
		}
		while( be >= 0 )
		{
			digit =  b[be] - '0' + carry;
			if( digit  >= 2)
			{
				digit -= 2;
				carry = 1;
			}
			else
			{
				carry = 0;
			}
			ch = digit + '0';
			temp.push_back(ch);
			//carry = 0;
			--be;
		}
		
		if( carry ){
			ch = carry+'0';
			temp.push_back(ch);
		}
		string result;
		ae = temp.size() - 1;
		while(ae >= 0 )
		{
			result.push_back(temp[ae]);
			--ae;
		}

		return result;
        
    }
};
