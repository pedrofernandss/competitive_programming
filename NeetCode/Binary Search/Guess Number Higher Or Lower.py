# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        l = 1

        while True:
            middle = (l+n)//2
            guess_ans = guess(middle)

            if guess_ans == 0:
                return middle
            elif guess_ans == 1:
                l = middle+1
            else:
                n = middle-1