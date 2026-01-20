def merge(nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        right = 0
        for i in range(m, len(nums1)):
            if nums1[i] == 0:
                nums1[i] = nums2[right]
                right += 1
        nums1.sort()   