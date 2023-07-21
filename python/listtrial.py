list1=[]
list2=[]
num1=int(input("enter num1:" ))
list1.append(num1)
num2=int(input("enter num2:" ))
list1.append(num2)
num3=int(input("enter num3: "))
list1.append(num3)
num4=int(input("enter num4: "))
list1.append(num4)
num5=int(input("enter num5: "))
list1.append(num5)
num6=int(input("enter num6: "))
list1.append(num6)
num7=int(input("enter num7: "))
list1.append(num7)
num8=int(input("enter num8: "))
list1.append(num8)
num9=int(input("enter num9: "))
list1.append(num9)
num10=int(input("enter num10: "))
list1.append(num10)
for i in list1:
    if i % 2 != 0:
        list2.append(i)
    else:pass
print(list2)