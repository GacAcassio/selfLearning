t=int(input())
for i in range(0,t):
    a,b=list(map(int,input().split()))
    if a%b==0:
        print("0")
    else:
        print("1")
