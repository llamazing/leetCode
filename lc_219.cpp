class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_map<int,int> hash;
		int i = 0, j =0;
		
		for( i = 0; i < nums.size();++i)
		{
			if( i - j == k )
			{
				hash[nums[j]] = 0;
				++j;
			}
			if( hash.find(nums[i]) == hash.end())
				hash[nums[i]] = 1;
			else
			{
				if((hash.find(nums[i])->value != 0))
					return true;
				hash[nums[i]] = 1;
			}
		}

		return false;
        
    }
};


