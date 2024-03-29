class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        lo = 0
        hi = len(numbers) - 1
        
        while lo < hi:
            if numbers[lo] + numbers[hi] < target:
                lo += 1
            elif numbers[lo] + numbers[hi] > target:
                hi -= 1
            else:
                break
                
        return lo + 1, hi + 1
