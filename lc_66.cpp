class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
		int carry = 0;
		int i = digits.size() - 1;
		for(;i >= 0;--i)
		{
			if( carry + digits[i]  >= 10)
			{
				digits[i] = (digits[i] + carry ) - 10;
				carry = 1;
				
			}
			else
			{
				digits[i] = digits[i] + carry;
				carry = 0;
			}
		}
        if( carry )
        {
        	digits.insert(digits.begin(), carry);
        }

		return digits;
    }
};
