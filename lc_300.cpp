class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {   
		int size = nums.size();
		int i = 0, j;
		vector<int> result(size); 
		if( size == 0)
			return 0;
		result[i] = 1;
		

		for(i=1;i < size; ++i)
		{
			result[i] = 1;
			for( j = i; j >= 0; --j)
			{
				if( nums[i] > nums[j])
					result[i] = max(result[j] + 1, result[i]);				
				
			}
		}
		int maxi = 0;
		for( i = 0; i < size; ++i)
		{
			maxi = max(result[i], maxi);
		}
		return maxi;
		
        
    }
};
/**
*using binary search to get the O(NlogN) complexity
*
*int insertPos(vector<int> &lis,int len,int val)
*   {
*       int start=0,end=len,mid;
*       while(start<end)
*       {
*           mid = (start+end)/2;
*           if(lis[mid]>val) end=mid;
*           else if(lis[mid]<val) start=mid+1;
*           else return mid;
*       }
*       if(lis[start]<val) return start+1;
*       else return start;
*   }
*   int lengthOfLIS(vector<int>& nums) {
*       int n=nums.size(),len,pos,i;
*       if(n<=1) return n;
*       vector<int> lis(n);
*       lis[0]=nums[0],len=0;
*       for(i=1;i<n;i++)
*       {
*           pos=insertPos(lis,len,nums[i]);
*           lis[pos]=nums[i];
*           len = max(len,pos);
*       }
*       return len+1;
*   }
*
*/

