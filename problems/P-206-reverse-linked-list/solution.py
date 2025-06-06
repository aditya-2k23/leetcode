"""
LeetCode Problem: 206. Reverse Linked List
Difficulty: Easy
Topics: Linked List, Recursion
Date Solved: 07/06/2025
"""

from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
          return head
        
        new_head = self.reverseList(head.next)
        
        front = head.next
        front.next = head
        head.next = None
        
        return new_head
