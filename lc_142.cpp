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
    ListNode *detectCycle(ListNode *head) {
		
		ListNode* slow = head, *fast = head;
		if( slow == NULL )
			return NULL;

		while(1)
		{
			slow = slow->next;
			fast = fast->next;
			if( slow == NULL || fast == NULL)
				return NULL;
			fast = fast->next;
			if( fast == NULL)
				return NULL;
			if( slow == fast)
				break;
		}

		ListNode * tra = head;
		while(1)
		{
			if( tra == slow)
				return tra;
			tra = tra->next;
			slow = slow->next;
		}
        
    }
};
/**
*Floyd-Cycyle!!
*
*/
