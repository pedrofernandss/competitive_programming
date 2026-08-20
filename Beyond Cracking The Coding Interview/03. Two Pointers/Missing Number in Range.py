def missing_number(arr, low, high):
    p1 = 0
    ans = []

    while (low <= high):
        if low < arr[p1]:
            ans.append(low)
            low += 1
        elif arr[p1] < low:
            p1 += 1
        else:
            p1 += 1
            low += 1
    return ans
