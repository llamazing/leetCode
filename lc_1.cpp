class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> temp = nums;
		vector<int> result;
		sort(temp.begin(), temp.end());

		int s = 0, e = temp.size() - 1;
		int sum;
		while( s < e )
		{
			sum = temp[s] + temp[e];
			if( sum == target)
				break;
			if( sum > target)
				--e;
			if( sum < target)
				++s;			
		}
		int i = 0, a, b;
		bool af = false, bf = false;
		for( ; i < nums.size();++i)
		{
			if(  nums[i] == temp[s])
			{
				if(!af)
					{
				a = i;
				af = true;
				continue;
					}
			}
			if( nums[i] == temp[e])
			{
				if(bf)
					continue;
				bf = true;
				b = i;
			}
		}
		if( a > b)
		{
			result.push_back( b + 1);
			result.push_back( a + 1);
		}
		else
		{
			result.push_back( a + 1);
			result.push_back( b + 1);
		}

		return result;
        
    }
};

/**
*using hash table!!
*unordered_map
*/

