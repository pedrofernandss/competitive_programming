class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1

        while l <= r:
            middle_idx = (l + r) // 2

            if target == nums[middle_idx]:
                return middle_idx
            elif nums[middle_idx] < target:
                l = (middle_idx + 1)
            else:
                r = (middle_idx - 1)

        return l