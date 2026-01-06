def scoreOfString(s):
    total = 0
    for idx in range(len(s)-1):
        sum = abs(ord(s[idx]) - ord(s[idx+1]))
        total += sum
    return total