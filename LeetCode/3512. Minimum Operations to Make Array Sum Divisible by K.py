def minOperations(self, nums: List[int], k: int) -> int:
    totalSumArr = 0
    maxValue = 0
    ans = 0
    for i in range(len(nums)):
        if nums[i] > maxValue:
            maxValue = nums[i]
        totalSumArr += nums[i]

    if(totalSumArr%k == 0):
        return 0
    else:
        while(totalSumArr%k != 0):
            totalSumArr -= 1
            ans += 1
    
    return ans