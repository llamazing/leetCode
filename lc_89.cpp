class Solution {
public:
    vector<int> grayCode(int n) {
		int num = 1 << n;
		vector<int> result;
		int i = 0;
		for( ; i  < num; ++i )
		{
			result.push_back(i ^ (i >> 1));
		}
		return result;        
    }
};

/**
*
*可以看到第n位的格雷码由两部分构成，一部分是n-1位格雷码，再加上 1<<(n-1)和n-1位格雷码的逆序的和。
*
*unsigned int binaryToGray(unsigned int num)
*{
*    return num ^ (num >> 1);
*}
*
*unsigned int grayToBinary(unsigned int num)
*{
*    unsigned int mask;
*    for (mask = num >> 1; mask != 0; mask = mask >> 1)
*    {
*        num = num ^ mask;
*    }
*    return num;
*}
*
*/

