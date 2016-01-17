class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

		int i = 0, j = 0 ,temp;
		vector<int> t(m);
		for(;i < m;++i)
			t[i] = nums1[i];
		i = 0;
		int c = 0;
		while( i < m && j < n)
		{
			if( t[i] < nums2[j] )
			{
				nums1[c++] = t[i++];
			}
			else
			{
				nums1[c++] = nums2[j++];
			}
		}
		while( j < n)
		{
			nums1[c++] = nums2[j++];
		}
		while( i < m)
		{
			nums1[c++] = t[i++];
		}
        
    }

	 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

		int i = m-1, j = n-1 ,t = n + m - 1;
		while( i >= 0 && j >= 0 )
		{
			if( nums1[i] > nums2[j])
			{
				nums1[t--] = nums1[i--];
			}
			else
				nums1[t--] = nums2[j--];
		}
		while( j >= 0)
		{
			nums1[t--] = nums2[j--];
		}
        
    }

	
};

