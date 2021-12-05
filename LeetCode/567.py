class Solution:
    def __verify_inclusion(self, dic1, dic2) -> bool:
        ans = True
        for l in dic1.keys():
            if dic1.get(l) != dic2.get(l):
                ans = False
        return ans
    
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        
        dic_s1 = {}
        for i in s1:
            if dic_s1.get(i):
                dic_s1[i] += 1
            else:
                dic_s1[i] = 1
        
        answer = False
        i = 0
        while (i <= len(s2) - len(s1)) and not answer:
            dic_slice_s2 = {}
            for j in range(i, i + len(s1)):
                if dic_slice_s2.get(s2[j]):
                    dic_slice_s2[s2[j]] += 1
                else:
                    dic_slice_s2[s2[j]] = 1
            
            answer = self.__verify_inclusion(dic_s1, dic_slice_s2)
            i += 1
        
        return answer
