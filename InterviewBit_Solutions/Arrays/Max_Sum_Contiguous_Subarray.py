# Kadane's Algorithm
    def maxSubArray(self, A):
        max_current=A[0];max_global=A[0]
        for i in range(1,len(A)):
            max_current=max(A[i],A[i]+max_current)
            max_global=max(max_current,max_global)
        return max_global
