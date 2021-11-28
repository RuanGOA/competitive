class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        while k > 0:
            cache = nums.pop(len(nums)-1)
            nums.insert(0, cache)
            k -= 1
