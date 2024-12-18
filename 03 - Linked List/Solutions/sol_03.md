# Remove Duplicates from Sorted List - [Practice - LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

Given the `head` of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list <b>sorted<b> as well.

<br>

Example:1
```
Input: head = [1,1,2]
Output: [1,2]
```
Example:2
```
Input: head = [1,1,2,3,3]
Output: [1,2,3]
```

## Solution 1  

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head== nullptr) return head;        
        
        ListNode *curr = head;        

        while(curr && curr->next){
            if (curr->val == curr->next->val)
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
        return head;        
    }
}; 
```