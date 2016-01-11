class Solution {
public:

	void DFS( vector<vector<int>>& result, int k, int n, int s,vector<int> &data)
	{
		if( k == 0 && n == 0)
		{
			result.push_back(data);
			return;
		}
		if( k == 0 || n == 0)
			return;

		int i;
		for(i = s;i < 10; ++i )
		{
			data.push_back(i);
			DFS(result, k - 1, n - i, i + 1, data);
			data.pop_back();
			
		}
		
	}
		
    vector<vector<int>> combinationSum3(int k, int n) {
      //  vector<int> flag(10);
		vector<vector<int>> result;
		vector<int> data;
		int s = 1;
		DFS(result, k, n, s, data);

		return result;
        
    }
};

