class Solution:
    def isPalindrome(self, x):
        if x < 0:
            return False
        for i in range(0, len(str(x)) // 2):
            if str(x)[i] != str(x)[len(str(x)) - 1 - i]:
                return False
        return True

        """
        :type x: int
        :rtype: bool
        """
        
