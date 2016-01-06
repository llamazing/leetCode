class Solution {
public:
    int majorityElement(vector<int>& nums) {
		int i = 1;
		int a = 1;
		int b = nums.at(0);
		for(;i < nums.size();++i)
		{
			if( b == nums.at(i))
				++a;
			else
			{
				--a;
				if( a == 0)
				{
					a = 1;
					b = nums.at(i);
				}
			}
		}

		return b;
        
    }
};

