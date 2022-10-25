t=int(input())
for i in range(0,t):
    (a,b,a1,b1,a2,b2) = map(int , input().split(" "))
    l1=0;
    l2=0;
    if(a==a1 or a==b1):
        l1=1
    if(b==a1 or b==b1):
        l1=l1+1
    if(a==a2 or a==b2):
        l2=1
    if(b==a2 or b==b2):
        l2=l2+l1
    if(l1==l2):
        print("0")
    elif(l1>l2):
        print("1")
    else:
        print("2")
