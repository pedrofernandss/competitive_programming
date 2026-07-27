class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums = sorted(nums)
        ans = []

        for i in range(len(nums) - 2):
            if (i > 0) and nums[i] == nums[i - 1]:
                continue

            l2 = i + 1
            l3 = len(nums) - 1

            while (l2 < l3):
                sum = nums[i] + nums[l2] + nums[l3]
                if (sum) == 0:
                    triplets = [nums[i], nums[l2], nums[l3]]
                    ans.append(triplets)
                    l2 += 1
                    l3 -= 1

                    while l2 < l3 and nums[l2] == nums[l2 - 1]:
                        l2 += 1
                    while l2 < l3 and nums[l3] == nums[l3 + 1]:
                        l3 -= 1

                elif (sum) < 0:
                    l2 += 1
                else:
                    l3 -= 1

        return ans