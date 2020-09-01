import sys

def leftRotation(a, d):
    out = list(a)
    a_len = len(a)
    #enumerate is a pre define function in python used to loop over an iterable starting from zero.
    for index, i in enumerate(a):
        out[(index + a_len - d) % a_len] = i

    return out
        
if __name__ == "__main__":
    n, d = input().strip().split(' ')
    n, d = [int(n), int(d)]
    a = list(map(int, input().strip().split(' ')))
    result = leftRotation(a, d)
    print (" ".join(map(str, result)))
