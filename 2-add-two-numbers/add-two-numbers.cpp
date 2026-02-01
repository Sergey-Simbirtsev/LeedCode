/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* a = new ListNode();

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	
	if (l1 == nullptr && l2 == nullptr)
	{
		return nullptr;
	}

	if (l1 == nullptr)
	{
		l1 = new ListNode();
	}
	if (l2 == nullptr)
	{
		l2 = new ListNode();
	}
	
	
	if ((l1->val + l2->val) > 9) 
	{
		if (l1->next != nullptr)
			l1->next->val++;
		else if (l2->next != nullptr)
			l2->next->val++;
		else
		{
			l1->next = new ListNode(1);
		}
	}
	
	a = new ListNode((l1->val + l2->val) % 10, addTwoNumbers(l1->next, l2->next));

	return a;
}
};