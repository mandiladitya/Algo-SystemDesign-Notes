    def coverPoints(self, A, B):
        l=[]
        m=[]
        s=0
        for i in range(1,len(A)):
            l.append(abs(A[i]-A[i-1]))
        for i in range(1,len(B)):
            m.append(abs(B[i]-B[i-1]))
        for i in range(len(l)):
            s+=max(l[i],m[i])
        return s
