/*------------------------------------------------------------------------------
 *
 * You are given two non-empty linked lists representing two non-negative 
 * integers. The digits are stored in reverse order and each of their nodes 
 * contain a single digit. Add the two numbers and return it as a linked list.
 *
 * You may assume the two numbers do not contain any leading zero, except the 
 * number 0 itself.
 *
 * Example:
 *
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
 *
 *----------------------------------------------------------------------------*/

#include<iostream>

struct ListNode{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
  public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
      //ListNode *head = new ListNode(0);
      //ListNode *ptr = head;
      //int carry = 0;
      //while(true){
      //  if(l1 != NULL){
      //    carry += l1 -> val;
      //    l1 = l1 -> next;
      //  }
      //  if(l2 != NULL){
      //    carry += l2 -> val;
      //    l2 = l2 -> next;
      //  }
      //  ptr -> val = carry % 10;
      //  carry /= 10;
      //  if(l1 != NULL || l2 != NULL || carry != 0){
      //    ptr = (ptr -> next = new ListNode(0));
      //  }
      //  else break;
      //}
      //return head;

      // pezy answer:
      ListNode dummy(0), *tail = &dummy;
      for(div_t sum{0, 0}; sum.quot || l1 || l2; tail = tail -> next){
        if(l1){
          sum.quot += l1 -> val; l1 = l1 -> next;
        }
        if(l2){
          sum.quot += l2 -> val; l2 = l2 -> next;
        }
        sum = div(sum.quot, 10);
        tail -> next = new ListNode(sum.rem);
      }
      return dummy.next;
    }
};
