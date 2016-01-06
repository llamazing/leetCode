class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		if( nums.size()  < 2)
			return false;
		sort(nums.begin(), nums.end());
		int i = 1;
		for(;i < nums.size();++i)
		{
			if( nums[i] == nums[i-1])
				return true;
		}
		
		return false;
		
        
    }
};

