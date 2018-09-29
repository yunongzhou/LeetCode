class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype List[int]
        """
        hash = {}
        for i in range(len(nums)):
            if target - nums[i] in hash:
                return [hash[target - nums[i]], i]
            hash[nums[i]] = i


nums = [2, 7, 11, 21]
target = 32
s = Solution()
print(s.twoSum(nums, target))
