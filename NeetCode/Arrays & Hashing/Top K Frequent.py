class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        seen = {}

        for i in nums:
            if i not in seen:
                seen[i] = 1
            else:
                seen[i] += 1

        seenSorted = sorted(seen.items(), key=lambda x:x[1], reverse= True)

        ans = [item[0] for item in seenSorted]

        return ans[:k]