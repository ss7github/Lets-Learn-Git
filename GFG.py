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
