word = 'hello word'
print(word[:]) # items start through the list
print(word.split(' '))
print(word.strip("hello"))


num1= int(input("enter integer"))
num2= int(input("enter integer"))
num3= int(input("enter integer"))
if num1 > num2 and num1 > num3:
    print(num1)
elif num2 > num1 and num2 > num3:
    print(num2)
else:
    print(num3)
    
    

for i in range(1,4):
    if i == 1:
        print("sunday")
    elif i == 2:
        print("monday")
    elif i == 3:
        print("tuesday")
    else:
        pass