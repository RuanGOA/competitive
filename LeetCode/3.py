class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        letter_set = set()
        lo = 0
        hi = 0
        max_len = 0
        while lo < len(s):
            if hi >= len(s):
                lo += 1
                hi = lo
            else:
                if s[hi] in letter_set:
                    lo += 1
                    hi = lo
                    if len(letter_set) > max_len:
                        max_len = len(letter_set)
                    letter_set.clear()
                else:
                    letter_set.add(s[hi])
                    hi += 1
        if len(letter_set) > max_len:
            max_len = len(letter_set)
              
        return max_len
