class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        seen = {}
        for str in strs:
            sortedStr = ''.join(sorted(str))
            if sortedStr not in seen:
                seen[sortedStr] = []
                seen[sortedStr].append(str)
            else:
                seen[sortedStr].append(str)

        return list(seen.values())