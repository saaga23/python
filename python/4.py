def integer():
    a= int(input("enter integer"))
    print(a)
    print(float(a))
integer()










list=[]
item= 0
a= str(input("enter a"))
list.append(a)
b= str(input("enter b"))
list.append(b)
c= str(input("enter c"))
list.append(c)
d= str(input("enter d"))
list.append(d)
e= str(input("enter e"))
list.append(e)
while item <=6:
    if item == 6:
        print("correct")
    else:
        print("incorrect")
    item +=1