# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def __removeNthFromEndGetTotal(self, node: Optional[ListNode], count: int) -> int:
        if node.next:
            return self.__removeNthFromEndGetTotal(node.next, count + 1)
        return count
        
    def __removeNthFromEndAux(self, node: Optional[ListNode], target: int, count: int) -> Optional[ListNode]:
        if not node.next:
            return None
        
        if target == count:
            return node.next
        
        node.next = self.__removeNthFromEndAux(node.next, target, count + 1)
        
        return node

        
        
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        total = self.__removeNthFromEndGetTotal(head, 1)
        
        target = total - n + 1
        
        node = self.__removeNthFromEndAux(head, target, 1)
        
        return node
