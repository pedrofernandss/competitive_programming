def three_way(arr1, arr2, arr3):
    p1, p2, p3 = 0, 0, 0
    ans = []

    while p1 < len(arr1) and p2 < len(arr2) and p3 < len(arr3):
        
        min_val = float('inf')

        if p1 < len(arr1):
            min_val = min(min_val, arr1[p1])
        if p2 < len(arr2):
            min_val = min(min_val, arr2[p2])
        if p3 < len(arr3):
            min_val = min(min_val, arr3[p3])


        if p1 < len(arr1) and arr1[p1] == min_val:
            p1 += 1
        if p2 < len(arr2) and arr2[p2] == min_val:
            p2 += 1
        if p3 < len(arr3) and arr3[p3] == min_val:
            p3 += 1
        
        if not ans or ans[-1] != min_val:
            ans.append(min_val)
        
    return ans
                    

arr1 = [2, 3, 3, 4, 5, 7]
arr2 = [3, 3, 9]
arr3 = [3, 3, 9]

print(three_way(arr1, arr2, arr3))