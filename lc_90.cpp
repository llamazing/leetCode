class Solution {
public:

	void dfs(vector<vector<int>>& result, vector<int>& data, int s, int e,vector<int> & nums)
	{
		int i = s;
		for(; i <= e ; ++i)
		{
			if( i == s )
			{
				data.push_back(nums[i]);				
			}
			else
			{
				if(nums[i] != nums[i-1])
				{
					data.push_back(nums[i]);					
				}
				else
					continue;
			}
			result.push_back(data);
			dfs(result, data, i+1, e, nums);
			data.pop_back();
		}
	}
	
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<vector<int>> result;
		int s = 0, e = nums.size() - 1;
		if( e < 0)
			return result;

		sort(nums.begin(), nums.end());
		vector<int> data;
		result.push_back(data);
		dfs(result, data, s, e, nums);

		return result;        
    }
};

