def verifica(n, m):
    linhaAnterior = ''
    for i in range(n):
        linhaAtual = input()
        if linhaAtual == linhaAnterior:
            return "NO"
        else:
            numIguais = True
            for idx, l in enumerate(linhaAtual):
                if idx < len(linhaAtual)-1:
                    if linhaAtual[idx] != linhaAtual[idx+1]:
                        numIguais = False
                        return "NO"
        if i == n-1:
            return "YES"
        
        linhaAnterior = linhaAtual


n, m = map(int, input().split())
result = verifica(n, m)
print(result)