class Solution {
public:
	void dfs(vector<vector<int>>& result, vector<int>& flag,vector<int>& res,vector<int>& data, int num)
	{
		if( num == 0)
		{
			result.push_back(res);
			return;
		}
		int i = 0;
		for(; i < data.size();++i)
		{
			if(flag[i])
				continue;
			res.push_back(data[i]);
			flag[i] = 1;
			dfs(result,flag, res, data,num-1);
			flag[i] = 0;
			res.pop_back();
		}
	}
    vector<vector<int>> permute(vector<int>& nums) {
		vector<int> flag(nums.size());
		vector<int> res;

		vector<vector<int>> result;
		dfs(result,flag,  res,nums,nums.size());
		return result;
        
    }
};

//dfs solution


