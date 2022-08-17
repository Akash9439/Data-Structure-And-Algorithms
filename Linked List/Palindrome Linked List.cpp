/*Given the head of a singly linked list, return true if it is a palindrome.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
 

Follow up: Could you do it in O(n) time and O(1) space?*/
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
    ListNode *reverse(ListNode *head)
        {
            if(head==NULL)
            {
                return NULL;
            }
        ListNode *p=NULL,*c=head,*n=head->next;
            while(c!=NULL)
            {
                c->next=p;
                p=c;
                c=n;
                if(n!=NULL)
                {
                    n=n->next;
                }
            }
            return p;
        }
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        ListNode *start=head,*mid=slow->next;
        while(mid!=NULL)
        {
            if(start->val!=mid->val)
            {
                return false;
            }
            start=start->next;
            mid=mid->next;
        }
        slow->next=reverse(slow->next);//to bring bac in original posittion
        return true;
    }
};
