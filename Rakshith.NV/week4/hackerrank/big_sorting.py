import sys


n = int(input().strip())
unsorted = []
unsorted_i = 0
for unsorted_i in range(n):
   unsorted_t = str(input().strip())
   unsorted.append(unsorted_t)

unsorted.sort(key = lambda x : int(x))
for u in unsorted:
   print(u)
