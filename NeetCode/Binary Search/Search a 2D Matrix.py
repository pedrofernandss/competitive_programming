class Solution:
    def computeMiddle(self, left, right):
        middle = (left + right) // 2
        return middle

    def binarySearch(self, nums: List[int], target: int) -> bool:
        left = 0
        right = len(nums) - 1

        while (left <= right):
            middle = self.computeMiddle(left, right)

            if target == nums[middle]:
                return True
            elif target < nums[middle]:
                right = middle - 1
            elif target > nums[middle]:
                left = middle + 1
        return False

    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for row in matrix:
            lastElement = row[len(row) - 1]

            if target == lastElement:
                return True
            elif target > lastElement:
                continue
            else:
                hasTarget = self.binarySearch(row, target)
                return hasTarget

        return False