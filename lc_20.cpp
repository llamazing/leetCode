class Solution {
public:
    int removeDuplicates(vector<int>& nums) {		
		int result = 1;
		int i = 1, j = 0;
		int size = nums.size();
		if( size < 2 )
			return size;

		for(;i < size;++i)
		{
			if( nums[i] != nums[i-1] && i != j++)
			{
				nums[j] = nums[i];
			}			
		}
		return j+1;        
    }
};

/**
*nums[j-1] = nums[i];,maybe j = 1, return j, will be more efficient
*be cautious about the characteristic of operator && !!!
*or you can write the condition as follows( ini j = 1, i = 1)
*if( nums[i] != nums[i-1])
*{
*	if( i != j)
*		nums[j] = nums[i];
*	++j;
*}
*/

