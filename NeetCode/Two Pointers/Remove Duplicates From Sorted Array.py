class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        seeker, writer = 1, 1

        while seeker < len(nums):
            if nums[seeker] != nums[seeker - 1]:
                nums[writer] = nums[seeker]
                writer += 1
                seeker += 1
            else:
                seeker += 1

        return writer
