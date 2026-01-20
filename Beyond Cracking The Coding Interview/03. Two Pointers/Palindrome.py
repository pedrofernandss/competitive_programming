def is_letter(char):
    return ord(char) >= ord('a') and ord(char) <= ord('z')

def is_digit(char):
    return ord(char) >= ord('0') and ord(char) <= ord('9')

def is_alpha(char):
    return is_letter(char) or is_digit(char)

def isPalindrome(s):
    l = 0
    r = len(s) - 1
    
    while l < r:
        if not is_alpha(s[l].lower()):
            l += 1
        elif not is_alpha(s[r].lower()):
            r -= 1
        else:
            if s[l].lower() != s[r].lower():
                return False
            l += 1
            r -= 1
            
    return True
