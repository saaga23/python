def cont(a,b,c,d):
    box=(0)
    for i in (a,b,c,d):
        box += i
    return box
a=int(input("please enter an integer value for a:"))
b=int(input("please enter an integer value for a:"))
c=int(input("please enter an integer value for a:"))
d=int(input("please enter an integer value for a:"))

total=cont(a,b,c,d)
print(total)
