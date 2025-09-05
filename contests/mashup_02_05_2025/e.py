n = int(input())
lista = [int(i) for i in input().split()]

op = 0
for i in range(1, len(lista)):
    if lista[i] < lista[i-1]:
        inc = lista[i-1] - lista[i]
        op += inc
        lista[i] += inc
        
print(op)
