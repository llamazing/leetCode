class Solution {
public:
	void DFS(vector<vector<int> >& result, vector<int>& data, int s, int e, int k)
	{
		
		if( k == 0)
		{
			result.push_back(data);
			return;			
		}
		if( s > e || e - s + 1 < k)
			return;
		int i;
		for(i = s; i <= e; ++i)
		{
			data.push_back(i);
			DFS(result, data, i+1,e, k-1);
			data.pop_back();
			
		}
	}
    vector<vector<int>> combine(int n, int k) {
		vector<vector<int>> result;
		if( n ==0 || k == 0)
			return result;
		if( k > n)
			return result;
		int s = 1, e = n;
		vector<int> data;
		DFS(result, data, s, e, k);

		return result;
        
    }
};

