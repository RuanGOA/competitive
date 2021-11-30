class Solution:
    def __swap_numbers(self, pos1: int, pos2: int, nums: List[int]) -> None:
        nums[pos1], nums[pos2] = nums[pos2], nums[pos1]
        
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        lo = 0
        hi = lo
        while (hi <= len(nums) - 1):
            if lo == hi:
                hi += 1
            elif nums[lo] != 0:
                lo += 1
            elif nums[hi] == 0:
                hi += 1
            else:
                self.__swap_numbers(lo, hi, nums)
                lo += 1
