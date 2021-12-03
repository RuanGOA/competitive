# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def __middleNodeAuxGetTotal(self, node: Optional[ListNode], count: int) -> int:
        result = count
        
        if node.next:
            result = self.__middleNodeAuxGetTotal(node.next, count + 1)
            
        return result
    
    
    def __middleNodeAuxGetNode(self, node: Optional[ListNode], target: int, count: int) -> Optional[ListNode]:
        if count == target:
            return node
        
        return self.__middleNodeAuxGetNode(node.next, target, count + 1)

    
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        total = self.__middleNodeAuxGetTotal(head, 1)
        
        target = total//2 + 1
        
        result = self.__middleNodeAuxGetNode(head, target, 1)
        
        return result
