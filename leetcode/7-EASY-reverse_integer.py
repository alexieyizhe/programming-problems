class Solution:
    def reverse(self, x):
        sign = -1 if x < 0 else 1
        x = abs(x)
        new_int = 0
        while x > 0:
            new_int = new_int * 10 + x % 10
            x = x // 10
        if new_int * sign < -2147483648 or new_int * sign > 2147483647:
            return 0
        return new_int * sign
        """
        :type x: int
        :rtype: int
        """
        
