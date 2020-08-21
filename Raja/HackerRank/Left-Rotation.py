l1=input().split()
l2=input()
n=int(l1[0])
d=int(l1[1])
arr=map(int,l2.rstrip().split())
arr=list(arr)
for i in range(d):
    arr.append(arr[0])
    del(arr[0])

print(' '.join(map(str, arr)))
        
