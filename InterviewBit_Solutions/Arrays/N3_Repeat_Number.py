from collections import Counter
class Solution:
    # @param A : tuple of integers
    # @return an integer
    def repeatedNumber(self, A):
        d=dict(Counter(A))
        for i in d:
            if d[i]>len(A)//3:
                return i
        else:
            return -1
