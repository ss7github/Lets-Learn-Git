#--------------------------------------------------------------------------------------------------------------
# 

#--------------------------------------------------------------------------------------------------------------
# 2 Arrays Equal or Not
class Solution:
    #Function to check if two arrays are equal or not.
    def check(self,A,B,N):
        
        A = sorted(A)
        B = sorted(B)
        for i in range(N):
            if A[i] != B[i]:
                return False
        return True
#--------------------------------------------------------------------------------------------------------------
# Is it Fibonacci
class Solution():
    def solve(self, N, K, GeekNum):
        
        n= abs( len(GeekNum)-N )

        while n>0:

            ans=0
            arr=GeekNum[::-1]

            for i  in range(K):
                ans+=arr[i]
            
            GeekNum.append(ans)
            GeekNum.pop(0)
            n-=1

        if len(GeekNum)==K:
            return GeekNum[-1]

        return GeekNum[-1]

# -------------------------------------------------------------------------------------------------------------
# Repeated Character

class Solution:
    def firstRep(self, s):
        
        for i in range (len(s)-1):
            for j in range (i+1, len(s)):
                if s[i] == s[j]:
                    return s[i]
        
        return -1
