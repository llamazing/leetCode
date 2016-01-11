class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
		int num = 0;
		int i, j;
		int row = matrix.size();
		if( row == 0)
			return;
		int col = matrix[0].size();
		vector<int> colflag(col);
		int a;
        for(i = 0; i < row;++i)
        {
        	for( j = 0; j < col; ++j)
        	{
        		if( matrix[i][j] == 0)
        		{
        			
        				
						for( a = 0; a < col;++a)
						{
							if( matrix[i][a] == 0)
							{
								if( colflag[a] == 0)
								{
								 	colflag[a] = 1;
									++num;
								}
								
								continue;	
							}
							matrix[i][a] = 0;
						}
						
        				if( colflag[j] == 0)
						{
							colflag[j] = 1;
							++num;
						}						
						break;
        			
        		}
        	}
			if( num == col)
				break;
        }
		for(a = 0; a < col; ++a)
		{
			if(colflag[a])
			{
				for( i = 0; i < row; ++i)
					matrix[i][a] = 0;
			}
		}
    }
};

/**
*a constant space solution
*taking row: 0, col: 0, as a flag to indicate whether set the whole row or column as 0
*using another two flag to indicate if there is any 0 on row 0 and column 0
*if matrix[i][j] = 0, set matrix[i][0] and matrix[0][j] = 0
*bottom up traverse
*
* for(int i=m-1;i>=0;i--)
*       for(int j=n-1;j>=0;j--)
*           if(i == 0 && row == true || j == 0 && col == true || matrix[0][j] == 0 || matrix[i][0] == 0 )
*               matrix[i][j] = 0;
*/

