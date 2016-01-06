class Solution {
public:
    int maxSubArray(vector<int>& nums) {
		int size = nums.size();
		int i = 0;
		if( size  < 1)
			return 0;

		int max = nums[0];
		int sum = 0;
		bool first = true;
		for(;i < size; ++i)
		{
			first = false;
			sum += nums[i];
			if(max < sum)
				max = sum;
			if( sum <= 0 )
			{
				sum = 0;
				first = true;
			}
		}
		if( max < sum && !first)
			max = sum;

		return max;
        
    }
};

