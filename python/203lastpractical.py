#sunday aspita abraham
#bu21csc2006
#computer science
#a program to find factorial of a number


#define the function
def factorial(n):
    tuple=(1)
    for i in range(n,0,-1):
        tuple=(tuple)*i
    return(tuple)
    
    
num=int(input("please enter an integer: "))
fact=factorial(num)
print(fact)
    
    
    
# a list comparisom program
def comparism(list1,list2):
    if list1 == list2:
        return("True")
    else:
        return("False")
        
        
list1=[5,4,4]
list2=[5,4,4]
comp=comparism(list1,list2)
print(comp)





#a program to filter out 2 in an input list of 10 integers
#create two empty list one for input other for filter 
list1=[]
list2=[]
#take in input values 
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
#to go through list1
for i in list1:
#to filter out the 2
    if i % 2 != 0:
        list2.append(i)
    else:pass
print(list2)