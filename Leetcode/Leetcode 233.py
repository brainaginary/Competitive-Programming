class Solution:
    def specialValues(self, n: int) -> int:
        return n * (10 ** (n - 1))

    def countDigitOne(self, n: int) -> int:
        if n == 0:
            return 0
        if n < 10:
            return 1

        s = str(n)
        length = len(s)
        s1 = s[1:]

        if s[0] == '1':
            return (int(s1) + 1) + self.specialValues(length - 1) + self.countDigitOne(int(s1))
        else:
            return int(s[0]) * self.specialValues(length - 1) + 10 ** (length - 1) + self.countDigitOne(int(s1))
            
 
