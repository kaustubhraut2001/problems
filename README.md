# problems
Two DSA Problems


##Problem statement 1 : Remove Nth Node From End of List##

>Given the head of a linked list, remove the nth node from the end of the list and return its head.


`Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:
Input: head = [1], n = 1
Output: []


Example 3:
Input: head = [1,2], n = 1
Output: [1]


code
</**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */>
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
};`




__Problem statement 2:  Odd Even Linked List__

Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
The first node is considered odd, and the second node is even, and so on.
Note that the relative order inside both the even and odd groups should remain as it was in the input.
You must solve the problem in O(1) extra space complexity and O(n) time complexity.

Example 1:
Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]

Example 2:
Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]

code :
</**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */>
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
         if(!head){
            return nullptr;

        }
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenst = even;


        while(odd->next && even->next){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
          }
         // even->next = even;
          odd->next = evenst;




        return head;

    }
};


