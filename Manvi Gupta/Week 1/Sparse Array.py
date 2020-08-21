#Sparse array
# in this program we are finding the querries elements to occur in the array. 
if __name__ == "__main__":
    strings = []
    N = int(input().strip())
    for i in range(N):
        strings.append(input().strip())
        
    Q = int(input().strip())
    for j in range(Q):
        substr = input().strip()
        print(strings.count(substr))
