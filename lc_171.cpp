class Solution {
public:
    int titleToNumber(string s) {
		int result = 0;
		int mult = 1;
		int i = s.size()-1;
		for(;i >= 0; --i)
		{
			result +=(s[i]-'A' + 1) * mult;
			mult *= 26;			
		}

		return result;
        
    }
};

