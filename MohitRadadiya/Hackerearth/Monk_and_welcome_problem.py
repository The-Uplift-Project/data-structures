'''
Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/description/
Author: MohitRadadiya
'''
n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
for i in range(n):
    a[i] = a[i] + b[i]
print(*a)
