#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int> &nums) {
		vector<int>::iterator itr = nums.begin();
		int a  = *(itr++);
		for(;itr != nums.end(); ++itr)
		{
			a ^= *itr;
		}
		return a;
    }
};