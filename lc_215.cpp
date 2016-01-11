class Solution {
public:
	int divide(vector<int>& nums, int s, int e)
	{
		int pivot = nums[s];
		int i = s + 1, j = e;
		while( i <= j )
		{
			while( nums[i] <= pivot){
				++i;
				if( i > e)
				{
					swap(nums[s],nums[e]);
					return e;
				}
			}
			while( nums[j] > pivot){
				--j;			
			}
			if( i < j)
				swap(nums[i], nums[j]);
		}
		swap(nums[s], nums[j]);
		return j;		
	}
    int findKthLargest(vector<int>& nums, int k) {
		int s = 0, e = nums.size() - 1;
		int t = nums.size() - k;
		int fl;
		while( s < e)
		{	
			fl = divide(nums, s, e);
			if( fl == t)
				return nums[fl];
			if( fl < t)
			{
				s = fl + 1;
			}
			else
			{
				e = fl - 1;
			}
		}

		return nums[e];
		
        
    }
};
/**
*nth_element(nums.begin(),nums.begin()+size-k,nums.end());
*priority_queue<int,vector<int>,greater<int>> topK;
*make_heap,<, pop_heap
*/

