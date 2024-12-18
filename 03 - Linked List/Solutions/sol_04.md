# Delete Node in a Linked List - [Practice - LeetCode](https://leetcode.com/problems/delete-node-in-a-linked-list/)

Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.
<br>
It is guaranteed that the node to be deleted is not a tail node in the list.


Example:1
```
Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.
```
Example:2
```
Input: head = [4,5,1,9], node = 1
Output: [4,5,9]
Explanation: You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.
```

## Solution 1  

Time - O(1)<br>
Space - O(1)

```cpp
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete node->next;
    }
};
```