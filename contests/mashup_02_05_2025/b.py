tests_cases = int(input())

for i in range(tests_cases):
    len_a = int(input())
    a = input()
    len_bc = int(input())
    b = input()
    c = input()
    new_word = a
    for idx, i in enumerate(c):
        if i == 'D':
            new_word += b[idx]
        if i == 'V':
            first = b[idx]
            new_word = first + new_word

    print(new_word)