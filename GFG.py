#--------------------------------------------------------------------------------------------------------------
#
class Solution:
    def minDist(self, arr, n, x, y):
        mind=10**5

        a,b=-1,-1

        if x==y:

            return 0

        for i in range(n):

            if arr[i]==x:

                a=i

            if arr[i]==y:

                b=i

            if a!=-1 and b!=-1:

                mind= min(mind,abs(a-b))

        

        if x not in arr or y not in arr:

            return -1

        return mind
# 
def strstr(s,x):
    # check if string x in string s

    if x in s :

        return s.find(x) #It returns the index of the position of x in s

    else:

        return -1


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
