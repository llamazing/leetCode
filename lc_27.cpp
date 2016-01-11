class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		int size = nums.size();
		int last = size - 1;
		int i = size - 1;
		int result = size;
		bool first = true;
		int temp;
		for(;i >= 0; --i)
		{
			if( nums[i] == val)
			{
				--result;
				if( first )
					continue;
				else
				{
					temp = nums[last];
					nums[last] = nums[i];
					nums[i] = temp;
					--last;
				}
			}
			else
			{
				if( first )
				{
					last = i;
					first = false;
				}
			}
		}
     return result;  
    }
};

/**
*a best solution
*for(i = j = numsSize - 1; i >= 0; i--)
*  if(nums[i] == val && i != j--) nums[i] = nums[j+1] ;
*/

