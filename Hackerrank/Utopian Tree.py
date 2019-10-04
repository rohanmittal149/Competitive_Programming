#!/bin/python3

import sys

def utopianTree(n):
    h = 1
    i = 1
    while i<=n:
        if i > 0 and i%2 != 0:
            h = h * 2
        else:
            h += 1
        i += 1
    return H
    

if __name__ == "__main__":
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        result = utopianTree(n)
        print(result)
