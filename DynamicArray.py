class DynamicArray:
    def __init__(self):
        self.capacity = 10
        self._size = 0
        self.fixed_array = [None]

    def get(self, int: idx):
        if(idx < 0 || idx >= self._size):
            raise IndexError('Index out of bounds')
        return self.fixed_array[idx]

    def set(self, int: idx, int: value):
        if(idx < 0 || idx >= self._size):
            raise IndexError('Index out of bounds')
        return self.fixed_array[idx] = value

    def size():
        return self._size
        
    def resize(self, int: new_capacity):
        new_fixed_size_arr = [None] * new_capacity
        for idx in range(self._size):
            new_fixed_size_arr[idx] = self.fixed_array[idx]
        self.fixed_array = new_fixed_size_arr
        self.capacity = new_capacity

    def append(self, int: value):
        if self._size == self.capacity:
            self.resize(capacity*2)
        self.fixed_array[self._size] = x
        self._size += 1

    def pop_back(self):
        if self._size == 0:
            raise IndexError('Pop from empty array')
        self._size -= 1
        if (self._size/self.capacity) < 0.25 and self.capacity > 10:
            self.resize(self.capacity//2)
        
