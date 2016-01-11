class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
		int row = n-1 ,col = n-1;
		int r_s = 0, c_s = 0;
			
		int i = 0;
		vector<vector<int>> result(n);
		for( i  = 0; i < n; ++i)
		{
			result[i].resize(n); 
		}
		
		int tra_i = 0, tra_j = 0;
		int direct = 0;//0:right, 1: down, 2: left, 3: up
		for( i = 1;i <= n*n;++i)
		{
			if( direct == 0 )//right
			{
				if( tra_j <=  col )
				{
					result[tra_i][tra_j] = i;
					++tra_j;
				}
				else
				{
					//--col;
					++r_s;
					++tra_i;
					--tra_j;
					direct = 1;
					--i;
					continue;
				}
			}
			if( direct == 1)//down
			{
				if( tra_i <=  row )
				{
					result[tra_i][tra_j] = i;
					++tra_i;
				}
				else
				{
					//--row;
					--col;
					--tra_i;
					--tra_j;					
					direct = 2;
					--i;
					continue;
				}
			}
			if( direct == 2)//left
			{
				if( tra_j >= c_s )
				{
					result[tra_i][tra_j] = i;
					--tra_j;
				}
				else
				{
					--row;
					--tra_i;
					++tra_j;
					direct = 3;
					--i;
					continue;
				}
			}
			if( direct == 3)//up
			{
				if( tra_i >= r_s)
				{
					result[tra_i][tra_j] = i;
					--tra_i;
				}
				else
				{
					++c_s;
					++tra_i;
					++tra_j;
					direct = 0;
					--i;
					continue;
				}
			}
			
		}

		return result;
        
    }
};


