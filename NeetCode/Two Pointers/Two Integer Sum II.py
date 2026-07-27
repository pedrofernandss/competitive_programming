class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        idx_pointer_one = 0
        idx_pointer_two = len(numbers)-1

        while idx_pointer_one != idx_pointer_two:
            if (numbers[idx_pointer_one] + numbers[idx_pointer_two]) == target:
                return [idx_pointer_one+1, idx_pointer_two+1]
                break
            elif (numbers[idx_pointer_one] + numbers[idx_pointer_two]) > target:
                idx_pointer_two -= 1
            else:
                idx_pointer_one += 1