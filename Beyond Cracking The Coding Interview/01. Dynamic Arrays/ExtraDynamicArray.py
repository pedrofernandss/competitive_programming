class ExtraDynamicArray:
    def __init__(self):
        self.capacity = 10
        self._size = 0
        self.fixed_array = [None] * self.capacity

    def get(self, idx):
        if idx < 0 or idx >= self._size:
            raise IndexError('Index out of bounds')
        return self.fixed_array[idx]

    def set(self, idx, value):
        if idx < 0 or idx >= self._size:
            raise IndexError('Index out of bounds')
        self.fixed_array[idx] = value

    def size(self):
        return self._size

    def resize(self, new_capacity):
        new_fixed_size_arr = [None] * new_capacity
        for idx in range(self._size):
            new_fixed_size_arr[idx] = self.fixed_array[idx]
        self.fixed_array = new_fixed_size_arr
        self.capacity = new_capacity

    def append(self, value):
        if self._size == self.capacity:
            self.resize(self.capacity*2)
        self.fixed_array[self._size] = value
        self._size += 1

    def pop_back(self):
        if self._size == 0:
            raise IndexError('Pop from empty array')
        self._size -= 1
        if (self._size/self.capacity) < 0.25 and self.capacity > 10:
            self.resize(self.capacity//2)

    def pop(self, idx):
        if idx < 0 or idx >= self._size:
            raise IndexError('Index out of bounds.')
        element = self.fixed_array[idx]
        for index in range(idx, self._size-1):
            self.fixed_array[index] = self.fixed_array[index+1]
        self.pop_back()
        return element

    def binary_search(self, element_of_interest):
        left = 0
        right = self._size - 1

        while (left <= right):
            middle = (left+right)//2
            guess = self.get(middle)
            if guess == element_of_interest:
                return guess
            if guess > element_of_interest:
                right = middle - 1
            else:
                left = middle + 1
        return None

    def contains(self, element):
        if self.binary_search(element) is None:
            raise IndexError('Element is not present in array.')
        else:
            return True
    
    def insert(self):
        pass

    def remove(self):
        pass

