class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left, right = 1, max(piles)
        ans = right

        while (left <= right):
            eatingRate = (left + right) // 2
            totalTime = 0

            for pile in piles:
                totalTime += math.ceil(float(pile) / eatingRate)

            if totalTime <= h:
                ans = eatingRate
                right = eatingRate - 1
            else:
                left = eatingRate + 1

        return ans