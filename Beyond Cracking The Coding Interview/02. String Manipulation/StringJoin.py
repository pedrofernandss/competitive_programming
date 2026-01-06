def array_to_string(arr):
    return ''.join(arr)

def join(arr, s):
    ans = []
    for i in range(len(arr)):
        if i != 0:
            for char in s:
                ans.append(char)
        for char in arr:
            ans.append(char)
    return array_to_string(ans)