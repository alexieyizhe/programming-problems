class Solution:
    def isValid(self, s):
        match = {')':'(', ']':'[', '}':'{'}
        open = ""
        for c in list(s):
            if c in ['(', '{', '[']:
                open += c
            else:
                if len(open) < 1 or open[len(open) - 1] != match[c]:
                    return False
                open = open[:len(open) - 1]
        return len(open) == 0

        """
        :type s: str
        :rtype: bool
        """
        
