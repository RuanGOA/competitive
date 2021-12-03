class Solution:
    def __reverse_word(self, word):
        word = list(word)
        lo = 0
        hi = len(word) - 1
        
        while lo < hi:
            word[lo], word[hi] = word[hi], word[lo]
            lo += 1
            hi -= 1
        
        return ''.join(word)
            
    def reverseWords(self, s: str) -> str:
        words = s.split()
        for i in range(len(words)):
            new_word = self.__reverse_word(words[i])
            words[i] = new_word
        
        return ' '.join(words)
