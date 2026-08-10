def merge(arr1, arr2):
    p1, p2 = 0
    ans = []

    while p1 < len(arr1) and p2 < len(arr2):
        if arr1[p1] <= arr2[p2]:
            ans.append(arr1[p1])
            p1 += 1
        else:
            ans.append(arr2[p2])
            p2 += 1

    while p1 < len(arr1):
        if arr1[p1] <= arr2[p2]:
            ans.append(arr1[p1])
            p1 += 1

    while p2 < len(arr2):
        if arr1[p1] > arr2[p2]:
            ans.append(arr2[p2])
            p2 += 1

    return ans