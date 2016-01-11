class Solution {
public:
    int findPeakElement(vector<int>& nums) {
		int size = nums.size();
		int i = 0;
		if(size == 1)
			return 0;
		for( ; i < size;++i)
		{
			if( i == 0 )
			{
				if( nums[i] > nums[i+1])
					return i;
			}
			if( i == size - 1)
			{
				if( nums[i] > nums[i-1])
					return i;
			}
			if( nums[i]>nums[i-1] && nums[i] > nums[i+1])
				return i;
		}
        
    }
};

/**
*The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.
*
*a O(logN) solution using binary search!!
*if nums[mid] < nums[mid - 1], that means the peak is on the left of nums[mid], so we move high to mid - 1
*if nums[mid] < nums[mid + 1], that means the peak is on the right of nums[mid], so we move low to mid + 1
*while (low <= high)
*
*/

