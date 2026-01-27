def two_sum(arr):
    i, j = 0, len(arr)-1

    while i < j:
        sum = arr[i] + arr[j]
        if sum == 0:
            return True
        if sum < 0:
            i += 1
        else:
            j -= 1
    
    return False