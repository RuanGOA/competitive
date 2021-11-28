class Solution: 
    def sortedSquares(self, nums: List[int]) -> List[int]:
        lo = 0
        hi = len(nums) - 1
        flag = True

        ans = []
        while flag:
            if lo == hi:
                flag = False

            if abs(nums[lo]) > abs(nums[hi]):
                ans.append(nums[lo]**2)
                lo += 1
            else:
                ans.append(nums[hi]**2)
                hi -= 1

        return ans[::-1]
