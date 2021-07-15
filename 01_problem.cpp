Problem Statement:  Remove Nth Node From End of List

Given the head of a linked list, remove the nth node from the end of the list and return its head.


Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:
Input: head = [1], n = 1
Output: []


Example 3:
Input: head = [1,2], n = 1
Output: [1]


code
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* j = new ListNode();
        j->next = head;
        ListNode* start = j;
        ListNode* end = j ;
        for(int i =1 ;i<=n ;++i){
            end = end->next;
        }
        while(end->next != NULL ){
        start = start->next;
        end = end->next;

        }

        start ->next = start->next->next;

    return j->next;
    }
};