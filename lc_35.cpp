class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
		int size = nums.size();
		int s = 0;
		int e = size -1;
		int m;

		while( s <= e)
		{
			m = ( s + e )/2;
			if( nums[m] == target)
				return m;
			if( nums[m] < target )
			{
				s = m + 1;
				continue;
			}
			if( nums[m] > target )
			{
				e = m -1;
			}
		}

		return s;
        
    }
};

