class Solution {
public:
    vector<vector<int>> generate(int numRows) {
		vector<vector<int>> result;
		if( numRows == 0)
        	return result;
		result.push_back(vector<int>(1,1));
		if( numRows == 1)
			return result;
		result.push_back(vector<int>(2,1));
		if( numRows == 2)
			return result;
		int i = 3, j =1, k;
		vector<int> data;
		for(;i <= numRows; ++i)
		{
			data.push_back(1);
			for( k = 1; k <= i -2;++k)
			{
				data.push_back(result[j][k-1] + result[j][k]);
			}
			data.push_back(1);
			result.push_back(data);
			data.clear();
			++j;
		}
		return result;
    }
};

