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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
		int length  = 0, sub;
		ListNode* tra = head, *tmp;
		while(tra){ ++length; tra = tra->next;}
		if( length == n)
		{
			tmp = head;
			head = head->next;
			delete tmp;			
		}
		else
		{
			sub = length - n - 1;
			tra = head;
			while( sub )
			{
				--sub;
				tra = tra->next;
			}
			tmp = tra->next;
			tra->next = tmp->next;
			delete tmp;
		}

		return head;
        
    }
};

