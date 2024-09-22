class Solution:
    import math

    def uniquePaths(self, m: int, n: int) -> int:
        total = m + n - 2
        choose = n-1
        return factorial(total)//(factorial(choose) * factorial(total-choose))
