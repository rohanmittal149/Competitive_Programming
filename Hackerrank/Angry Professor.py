import sys

def angryProfessor(k1, a1):
    i = 0  
    for x in a1:
        if x<=0:
            i += 1
    if i >= k1:
        return "NO"
    else:
        return "YES"


if __name__ == "__main__":
    t = int(input().strip())
    for a0 in range(t):
        n, k = input().strip().split(' ')
        n, k = [int(n), int(k)]
        a = list(map(int, input().strip().split(' ')))
        result = angryProfessor(k, a)
        print(result)
