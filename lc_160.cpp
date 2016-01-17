/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	void Traverse(ListNode * &t, int num)
	{
		while( num )
		{
			t = t->next;
			--num;
		}
	}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode  *result = NULL;

		int i = 0, j = 0;
		ListNode *tra = headA, *trb = headB;

		while( tra )
		{
			++i;
			tra = tra->next;
		}

		while( trb )
		{
			++j;
			trb = trb->next;
		}
		tra = headA;
		trb = headB;
		if( i > j)
			Traverse(tra, i - j );
		else
			Traverse(trb, j - i );

		while( tra && trb)
		{
			if( tra == trb)
			{
				result = tra;
				break;
			}
			tra = tra->next;
			trb = trb->next;
		}

		return result;
    }
};
/**
*one traversal solution
*if(curA==curB)  return curA;
*if(curA==NULL)  curA=headB;!!!!!
*if(curB==NULL)  curB=headA;!!!!!!
*
*/

