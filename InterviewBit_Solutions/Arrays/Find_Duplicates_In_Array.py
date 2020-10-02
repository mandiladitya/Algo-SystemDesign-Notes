from collections import Counter
class Solution:
    # @param A : tuple of integers
    # @return an integer
    def repeatedNumber(self, A):
        d=dict(Counter(A))
        for i in d:
            if d[i]>=2:
                return i
        
