class Solution {
public:
	void dfs(vector<vector<int>> &result, vector<int> &data, int target, vector<int>& element, int s)
	{
		if( target == 0)
		{
			result.push_back(data);
			return;
		}
		if( target < 0)
			return;

		int i;
		for( i = s; i < element.size(); ++i)
		{
			data.push_back(element[i]);
			dfs(result, data, target - element[i], element, i);
			data.pop_back();
		}
	}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

		sort(candidates.begin(), candidates.end());
		vector<vector<int>> result;
		if( candidates.size() < 1)
			return result;
		vector<int> data;

		dfs(result, data, target,candidates, 0);
		return result;
    }
};

