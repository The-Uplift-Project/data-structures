'''
Link: https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/monk-teaches-palindrome/description/
Author: MohitRadadiya

'''
n = int(input())
for i in range(n):
    s = input()
    if(s == s[::-1]):
        print("YES",end=" ")
        if(len(s)%2 == 0):
            print("EVEN")
        else:
            print("ODD")
    else:
        print("NO")
