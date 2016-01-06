class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		int size = nums.size() - 1;
		int i = size;
		int num = 0;
		int lastI = 0;
		int j = 0;
		for(;i>=0; --i)
		{
			if(nums.at(i) != 0)
				continue;
			else
			{
				for(j = i+1; j <= size ; ++j)
				{
					if(nums.at(j) == 0)
						break;
					int temp = nums.at(j-1);
					nums.at(j-1)= nums.at(j);
					nums.at(j) = temp;
				}
			}
			
		}
        
    }
};

