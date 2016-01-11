class Solution {
public:
    int findMin(vector<int>& nums) {
		int low = 0, high = nums.size()-1, mid;
		while( nums[low] == nums[high] && low < high)
			--high;

		while( low < high )
		{
			if( nums[low] < nums[high])
				return nums[low];
			mid = (low + high)/2;
			if( nums[low] <= nums[mid])//!!!!
				low = mid + 1;
			else
				high = mid;
		}
			
		return nums[low];
    }
};
/*
*be careful when mid = low or mid = high
*/

