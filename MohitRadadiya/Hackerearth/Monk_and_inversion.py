'''
Link: https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/monk-and-inversions-arrays-strings/submissions/
Author: MohitRadadiya
'''
for _ in range(int(input())):
    n = int(input())
    arr = []
    m = []
    l = []
    count = 0
    for k in range(n):
        arr.append(list(map(int, input().strip().split(" "))))
    for i in range(n):
        for j in range(n):
            m.append((i, j))
            l.append((i, j))
    for i, j in m:
        for p, q in l:
            if i <= p and j <= q:
                if arr[i][j] > arr[p][q]:
                    count += 1
    print(count)
