class Solution {
public:
    int search(vector<int>& nums, int target) {

		if( nums.size() < 1)
			return -1;
		int s = 0, e = nums.size() - 1, mid;
		if( nums.size() == 1)
           return nums[0] == target ? 0 :  -1;
		while( s <= e)
		{
			mid = ( e - s)/2 + s;
			if( nums[mid] == target)
				return mid;
			if( nums[s] == target)
				return s;
			if( nums[e] == target)
				return e;
			
			if( nums[s] < nums[e])
			{				
				if( nums[mid] < target )
				{
					s = mid + 1;
					continue;
				}
				else
				{
					e = mid - 1;
					continue;
				}
			}
			else
			{
				if( nums[s] < nums[mid])
				{
					if( nums[s] < target && target < nums[mid])
					{
						e = mid -1;
						continue;
					}
					else
					{
						s = mid + 1;
						continue;
					}
				}
				else
				{
					if( nums[e] > target && target > nums[mid])
					{
						s = mid + 1;
						continue;
					}
					else
					{
						e = mid - 1;
						continue;
					}
				}
			}
		}

		return -1;
        
    }
};

/**
*
*Search in Rotated Sorted Array
*/2 == >>1
*/

