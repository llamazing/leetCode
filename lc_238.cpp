class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
		vector<int>	result;
		int i = 0;
		int res = 1;
		int res1 = 1;
		int index1, index2, num =0;
		if( nums.at(0) == 0)
		{
			index1 = 0;
			++num;
		}
		else
			res = nums.at(0);
		for( i = nums.size()-1; i > 0; --i )
		{
			res1 *= nums.at(i);
			if(nums.at(i) == 0)
			{
			
				if( num == 0)
					index1 = i;
				if( num == 1)
					index2 = i;
				++num;
				continue;
			}
			else
			{
				res *= nums.at(i);
			}			
			
		}
		result.push_back(res1);
		if( num == 0)
		{
			for( i = 1; i < nums.size(); ++i){
				result.push_back(res/nums.at(i));
			}
		}
		else if( num == 1)
		{
			for( i = 1; i < nums.size(); ++i){
				if( i == index1)
					result.push_back(res);
				else
					result.push_back(0);
			}
			
		}
		else if( num >= 2)
		{
			for( i = 1; i < nums.size(); ++i){
				result.push_back(0);
			}
		}
		
		return result;
    }
};

