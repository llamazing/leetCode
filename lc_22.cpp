class Solution {
public:
	void DFS(string str, int n, int el, int er,int total,vector<string>& result)
	{
		string temp = str;
		if( n == 1)
		{
			temp.append(")");
			result.push_back(temp);
			return;
		}
		if( el == 0)
		{
			temp.append("(");			
			DFS(temp, n-1 , el + 1, er,total ,result);
			return;
		}
		else if( el > 0 )
		{
			if( total > el)
			{
				temp.append("(");
				DFS(temp, n -1, el + 1,er ,total, result);
				temp = str;
				if( el <= er)
					return;
				temp.append(")");
				DFS(temp, n - 1, el, er + 1,total, result);
				return;
			}
			else
			{
				temp.append(")");
				DFS(temp, n - 1, el, er + 1,total, result);
				return;
			}
		}
	}
    vector<string> generateParenthesis(int n) {
		vector<string> result;
		DFS("", 2*n, 0, 0,n ,result);
		return result;
	   
    }
};

/**
*DFS!!!!
*/
