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
*���Կ�����nλ�ĸ������������ֹ��ɣ�һ������n-1λ�����룬�ټ��� 1<<(n-1)��n-1λ�����������ĺ͡�
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

