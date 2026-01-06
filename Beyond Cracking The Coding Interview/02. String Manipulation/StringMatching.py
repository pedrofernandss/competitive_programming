def index_of_naive_solution(s, t):
  if not t:
    return 0
  if not s:
    return -1

  for i in range(len(s) - len(t) + 1):
    found = True
    for j in range(len(t)):
      if s[i + j] != t[j]:
        found = False
        break
    if found:
      return 1
  return -1