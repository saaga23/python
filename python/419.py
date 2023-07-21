def factorial(n):
    product= 1
    for i in range(n,0,-1):
        product = product*i
    print(product)
factorial(4)


def comparism(a,b):
    if a==b:
        print("true")
    else:
        print("false")
        
lista=[1,2,3,4,5,6]
listb=[1,2,3,4,5,6]
comparism(lista,listb)


list=[]
item1=int(input("enter item1"))
list.append(item1)
item2=int(input("enter item1"))
list.append(item2)
item3=int(input("enter item1"))
list.append(item3)
item4=int(input("enter item1"))
list.append(item4)
item5=int(input("enter item1"))
list.append(item5)
item6=int(input("enter item1"))
list.append(item6)
item7=int(input("enter item1"))
list.append(item7)
item8=int(input("enter item1"))
list.append(item8)
item9=int(input("enter item1"))
list.append(item9)
item10=int(input("enter item1"))
list.append(item10)
for i in list:
    if i % 2 != 0:
        print(i)