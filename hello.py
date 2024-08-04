import sys
def input()   : return sys.stdin.readline().strip()
def getints() : return map(int,sys.stdin.readline().strip().split())
 
for _ in range(int(input())):
    n = int(input())
    print(*range(1,n+1))

print("HEllow ")