t=int(input())
while t>0:
    t-=1 
    n=int(input())
    v=list(map(int, input().split(' ')))
    s1=0
    s2=0
    t1=0
    t2=0
    for i in v:
        if i>0:
         t1+=1
        else:
         t2+=1
    if t1==0:
        print(t2, t2)
    elif t2==0:
        print(t1, t1)
    else:
        print(t1, t2)
