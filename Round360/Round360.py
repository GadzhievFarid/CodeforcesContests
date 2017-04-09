#def gcd(a,b):
#    while b:
#        a, b = b, a%b
#    return a

def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b, a % b)

def lcm(a,b):
    return a * b / gcd(a,b)

n, k = [int(i) for i in input().split()]
arr = list(set([int(i) for i in input().split()]))
cur = 1
for i in arr:
    cur = gcd(lcm(cur, i), k)
if cur == k
    print("Yes")
else:
    print("No")