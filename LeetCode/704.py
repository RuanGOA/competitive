class Solution:
    def search(self, nums: List[int], target: int) -> int:
        lo = 0
        hi = len(nums) - 1
        while lo < hi:
            mid = (lo + hi)//2
            if target <= nums[mid]:
                hi = mid
            else:
                lo = mid + 1

        if nums[lo] == target:
            return lo

        return -1
