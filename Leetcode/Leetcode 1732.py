class Solution(object):
    def largestAltitude(self, gain):
        ans = 0
        alt = 0
        for i in range(len(gain)):
            alt += gain[i]
            if alt > ans:
                ans = alt
        return ans
