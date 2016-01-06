class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
		 vector<int>::iterator itr = nums.begin();
		 int result = 0;
		 for(; itr != nums.end(); ++itr)
		 {
		 	result ^= *itr;
		 }

		 vector<int> ret;
		 int temp = 0, temp2 = 0;

		 result = result & ( ~(result -1));
		 for( itr = nums.begin(); itr != nums.end(); ++itr)
		 {
		 	if( (result & (*itr) ) == 0)//注意优先级,按位与小于比较
		 	{
		 		temp ^= *itr;
		 	}
			else
			{
				temp2 ^= *itr;
			}
		 	
		 }

		 ret.push_back(temp);
		 ret.push_back(temp2);
		 return ret;
        
    }
};

