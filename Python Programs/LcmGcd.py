#Program to find GCD and LCM of given numbers
from math import gcd

def lc(a,b):
    return ((a*b)/gcd(a,b))

for x in range(int(input())):
    (a,b)=[int(m) for m in input().split()]
    k=gcd(a,b)
    lcm =(a*b//k)
    print(k,lcm)
