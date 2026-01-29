class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}

        for i in range(len(nums)):
            value_to_look = target - nums[i]
            if value_to_look in seen:
                return [seen[value_to_look], i]
            seen[nums[i]] = i