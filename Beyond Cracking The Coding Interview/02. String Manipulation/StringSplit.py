def split(s, c):
    output = []
    subset = []
    for char in s:
        if char != c:
            subset.append(char)
        else:
            word = ''.join(subset)
            output.append(word)
            subset = []