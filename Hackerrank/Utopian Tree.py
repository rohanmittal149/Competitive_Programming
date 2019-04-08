#!/bin/python3

import sys

def utopianTree(n):
    H = 1
    i = 1
    while i<=n:
        if i > 0 and i%2 != 0:
            H = H * 2
        else:
            H += 1
        i += 1
    return H
    

if __name__ == "__main__":
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        result = utopianTree(n)
        print(result)
