class Solution {
public:
    int findMin(vector<int>& nums) {
		int i = 1;
		int size = nums.size();
		if( size < 2)
			return nums[0];
		
		int min = nums[0];
		for( i = 0; i < size; ++i)
		{
			if( min > nums[i])
			{
				min = nums[i];
			}
		}

		return min;
        
    }
};

/*
*exists logN ??
*
*int findMin(vector<int>& nums) {
*    int l = 0, r = nums.size()-1;
*    while (l < r) {
*        int mid = (r-l)/2 + l;
*        if (nums[mid] < nums[r])
*            r = mid;
*        else
*            l = mid + 1;
*    }
*    return nums[l];
*}
*/

