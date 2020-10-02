    def maxArr(self, A):
        plus=[];minus=[]
        for i in range(len(A)):
            plus.append(A[i]+i)
            minus.append(A[i]-i)
        max1=max(plus)
        min1=min(plus)
        max2=max(minus)
        min2=min(minus)
        return max(max1-min1,max2-min2)
