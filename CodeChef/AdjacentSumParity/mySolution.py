t=int(input())
for i in range(0,t):
    n=int(input())
    v=list(map(int, input().split()))
    if v[0]==0:
        p='I'
    else:
        p='P'
    a=p
    for j in range(0,n):
        if v[j]==0:
            if a=='I':
                a='I'
            else:
                a='P'
        else:
            if a=='I':
                a='P'
            else:
                a='I'
    if a==p:
        print("YES")
    else:
        print("NO")
