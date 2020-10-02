def isPalindrome(self, A):
        A=str(A)
        if(A==A[::-1]):
            return 1
        return 0
