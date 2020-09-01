'''
Link: https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/little-monk-and-good-string/submissions/
Author: MohitRadadiya
'''
string = list(input())
vowels = ['a', 'e', 'i', 'o', 'u']
count = 0
ans = 0
for i in range(len(string)):
    if string[i] in vowels:
        count += 1
        ans = max(ans, count)
    else:
        count = 0
print(ans)
