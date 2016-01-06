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
    ListNode* reverseList(ListNode* head) {

		if( head == NULL)
			return NULL;
		ListNode *temp, *last;
		
		last = head;
		head = head->next;
		last->next = NULL;
		while( head )
		{
			//last->next = head->next;
			temp = head->next;
			head->next = last;
			last = head;
			head = temp;
			
		}
        return last;
    }
};

