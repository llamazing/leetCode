class Solution {
public:
    int singleNumber(vector<int>& nums) {
		vector<int>::iterator itr = nums.begin();

		int a = 0, b = 0, c, temp;
		for(; itr != nums.end();++itr)
		{

			c = *itr;
			temp = (a & ~b & ~c)|(~a & b & c);
			b = ~a & (c ^ b);	
			a = temp;
		}

		return b;
        
    }
};

/*
*counting !!
*
*/

