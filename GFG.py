#--------------------------------------------------------------------------------------------------------------
# 

# -------------------------------------------------------------------------------------------------------------
# Repeated Character

class Solution:
    def firstRep(self, s):
        
        for i in range (len(s)-1):
            for j in range (i+1, len(s)):
                if s[i] == s[j]:
                    return s[i]
        
        return -1