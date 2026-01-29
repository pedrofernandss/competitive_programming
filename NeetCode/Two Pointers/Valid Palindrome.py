class Solution:
    def is_digit(self, char):
        return ord('0') <= ord(char) and ord(char) <= ord('9')

    def is_letter(self, char):
        return ord('a') <= ord(char) and ord(char) <= ord('z')

    def is_alphanumeric(self, char):
        return self.is_digit(char) or self.is_letter(char)

    def isPalindrome(self, s: str) -> bool:
        l, r = 0, len(s)-1

        s = s.lower()
        
        while l < r:
            if not self.is_alphanumeric(s[l]):
                l += 1
            elif not self.is_alphanumeric(s[r]):
                r -= 1
            else:
                if s[l] != s[r]:
                    return False
            
                l += 1
                r -= 1
        
        return True