class Solution:
    def myAtoi(self, str):
        if not str:
            return 0
        str = str.replace(" ", "")

        i = 0
        sign = 1

        if i == len(str):
            return 0

        if str[i] == '+':
            i = i+1
        elif str[i] == '-':
            sign = -1
            i = i + 1

        num = 0
        for i in range(i, len(str)):
            if str[i] < '0' or str[i] > '9':
                break
            num = num * 10 + int(str[i])
            if num > (1 << 31 - 1):
                break

        num *= sign

        if num > (1 << 31 - 1):
            return 1 << 31 - 1
        if num < -1 << 31:
            return -1 << 31
        return num


s = Solution()
testCase = input("### input a string:")
print(s.myAtoi(testCase))
