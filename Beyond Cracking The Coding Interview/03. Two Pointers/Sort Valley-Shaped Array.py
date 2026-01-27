def sort_valley_array(arr):
    if len(arr) == 0:
        return []
    
    l, r, = 0, len(arr)-1
    ans = [0] * len(arr)

    i = len(arr)-1

    while l < r:
        if arr[l] >= r:
            ans[i] = arr[l]
            l += 1
            i -= 1
        else:
            ans[i] = arr[r]
            r -= 1
            i -= 1

    ans[0] = arr[l]

    return ans