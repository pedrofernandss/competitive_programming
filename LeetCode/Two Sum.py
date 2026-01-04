def twoSum(nums: list[int], target: int) -> list[int]:
        hashmap = {}
        for idx in range(len(nums)):
                hashmap[nums[idx]] = idx
        for idx in range(len(nums)):
                complement = target - nums[idx]
                if complement in hashmap and hashmap[complement] != idx:
                       return [idx, hashmap[complement]] 
        return []