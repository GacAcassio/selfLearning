t=int(input())
for i in range(0,t):
    n=int(input())
    b=list(map(int, input().split()))
    a=[0]*n
    s=0
    for i in range(0,n):
        s+=b[i]
    for j in range(0,n):
        a[j]=b[j]-(s/(n+1))
        a[j]=int(a[j])
        print(a[j], end=' ')
    print(' ')
