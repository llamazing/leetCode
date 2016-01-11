class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		if( nums.size() < 3)
			return nums.size();

		int i = 1, j = 1, dup = 0;

		for(; i < nums.size(); ++i)
		{
			if( nums[i] != nums[i-1] )
			{
				if( i != j )
				{
					nums[j] = nums[i];			
				}
				++j;
				dup = 0;
				continue;
			}

			if( !dup )
			{
				nums[j] = nums[i];
				++j;
				dup = 1;
				
			}
		}
		return j;
        
    }
};

