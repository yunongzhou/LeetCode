class Solution:
    def reverse(self, x):
        j = 0
        while True:
            j = j * 10 + x % 10
            x /= 10
            if x == 0:
                break
        return j


s = Solution()
print(s.reverse(16))
