def two_sum(arr):
    l, r = 0, len(arr)-1

    while l < r:
        if arr[l] + arr[r] > 0:
            r -= 1
        elif arr[l] + arr[r] < 0:
            l += 1
        else:
            return True
    return False