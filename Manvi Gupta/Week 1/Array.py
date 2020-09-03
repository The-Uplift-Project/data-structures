#!/bin/python3

import math
import os
import random
import re
import sys

# Completed the reverseArray function below.
def reverseArray(a):
     #array is reversed with the help of slicing method.
    b=a[::-1]
    #reversed array is passed to array b and is returned.
    return b
    

    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = reverseArray(arr)

    fptr.write(' '.join(map(str, res)))
    fptr.write('\n')

    fptr.close()
