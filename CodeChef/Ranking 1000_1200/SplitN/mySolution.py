t=int(input())
while t > 0 :
    t -= 1
    x=int(input())
    n=0
    while x > 0 :
        a=0
        c=0
        while a <= x:
            a = 2**c
            c += 1
        a /= 2
        x -= a
        if x > 0 :
            n += 1
    print(n)
