t=int(input())
while t>0 : 
    t-= 1 
    n=int(input())
    v = list(map(int, input().split()))
    v=set(v)
    if 0 in v:
        c=len(v)-1
    else:
        c=len(v)
    print(c)
