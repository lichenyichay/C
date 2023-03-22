a = int(input(""))
x=0
for i in range(a):
    b = input("")
    if b=="++x" or b=="x++":
        b = "x+=1"
    else:
        b = "x-=1"
    exec(b)
print(x)
