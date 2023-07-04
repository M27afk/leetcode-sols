/*
In a linked list of size n, where n is even, the ith node (0-indexed) of the linked list is known as the twin of the (n-1-i)th node, if 0 <= i <= (n / 2) - 1.

For example, if n = 4, then node 0 is the twin of node 3, and node 1 is the twin of node 2. These are the only nodes with twins for n = 4.

Input: head = [5,4,2,1]
Output: 6
Explanation:
Nodes 0 and 1 are the twins of nodes 3 and 2, respectively. All have twin sum = 6.
There are no other nodes with twins in the linked list.
Thus, the maximum twin sum of the linked list is 6.

https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/

Intuition: Reverse any half of the linked list (first half in this case)
Traverse with 2 pointers from either side and find the max sum
*/



 int pairSum(ListNode* head) {
        ListNode* slow=head;ListNode* fast=head;ListNode* prev=NULL;ListNode* next;
        while(fast && fast->next ){     //reverse first half
            fast=fast->next->next;
            next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }

     
        int sum=INT_MIN;

        while(prev!=NULL){           //use 2 pointers and find the maximum sum
            sum=max(sum,prev->val+slow->val);
            prev=prev->next;
            slow=slow->next;
        }
        return sum;
    }
};
