class Solution {
public:

	void dfs(vector<vector<int>> &result, int num, int s,int e, vector<int>& data, vector<int>& element)
	{
		if( num == 0)		
			return;
		int j = s;
		for(; j <= e; ++j)
		{
			data.push_back(element[j]);
			result.push_back(data);
			dfs(result, num - 1, j+1, e, data ,element);
			data.pop_back();
		}
	}
    vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> result;
		vector<int> data;
		result.push_back(data);
		int size = nums.size();

		if( size < 1)
			return result;

		sort(nums.begin(), nums.end());
		int i = 1;
		dfs(result, size, 0, size - 1, data, nums);

		return result;
    }
};

/*
*a iterative solution
*
* for(int i=0;i<nums.size();++i)
*     {
*         int tempResultSize = result.size();
*         for(int j=0;j < tempResultSize;++j)
*         {
*           vector<int> tempSet;   
*           tempSet = result[j];
*           tempSet.push_back(nums[i]);
*           result.push_back(tempSet);
*         }
*     }
*/

