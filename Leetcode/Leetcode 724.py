class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        pivot = -1
        n = len(nums)
        total = sum(nums)

        leftSum = 0
        rightSum = total
        if (total - nums[0] == 0):
            return 0
        for i in range(1,n):
            pivotSum = total - nums[i]
            leftSum += nums[i-1]
            rightSum = pivotSum - leftSum
            if rightSum == leftSum:
                pivot = i
                break
        return pivot
