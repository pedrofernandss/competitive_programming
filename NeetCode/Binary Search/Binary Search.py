class Solution:
    def computeMiddle(self, nums: List[int], left: int, right: int) -> int:
        middle = (right + left) // 2
        return middle

    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1

        while (left <= right):
            middle = self.computeMiddle(nums, left, right)
            if nums[middle] == target:
                return middle
            elif nums[middle] > target:
                right = middle - 1
            elif nums[middle] < target:
                left = middle + 1

        return -1