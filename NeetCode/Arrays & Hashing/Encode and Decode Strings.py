class Solution:
    def encode(self, strs: List[str]) -> str:
        ans = ""
        for string in strs:
            num = len(string)
            ans += f"{num}#{string}"

        return ans

    def decode(self, s: str) -> List[str]:
        ans = []
        idx = 0

        while idx < len(s):
            num = ""
            while s[idx] != "#":
                num += s[idx]
                idx += 1

            idx += 1
            length = int(num)
            ans.append(s[idx: idx + length])
            idx += length
        return ans