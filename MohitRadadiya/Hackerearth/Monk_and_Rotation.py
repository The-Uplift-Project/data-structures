'''
Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-rotation-3/submissions/
Author: MohitRadadiya

'''
for _ in range(int(input())):
    n, k = map(int, input().strip().split(" "))
    arr = list(map(int, input().strip().split(" ")))
    k = k%n
    arr = arr[n-k:] + arr[:n-k]
    print(*arr)
