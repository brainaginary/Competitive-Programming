class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        bruh_max = max(candies)
        return [extraCandies + c >= bruh_max for c in candies]
