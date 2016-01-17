class Solution {
public:
    int lengthOfLastWord(string s) {
		string::reverse_iterator itr = s.rbegin();
		int result  = 0;
		while( itr != s.rend())
		{
			if( *itr == ' ')
			{
				if( result > 0)
					return result;
			
			}
			else
				++result;
			++itr;
		}

		return result;
    }
};

/**
*simpler and faster
*while(s[i] == ' ') i--;
*while(i >= 0 && s[i--] != ' ') res++;
*
*/

