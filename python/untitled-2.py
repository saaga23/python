def name(first_name,last_name):
    print(last_name+" "+first_name)
    
name("abraham","sunday")


color_list= ["red", "green", "white", "black"]
print(color_list[0]," "+color_list[3])


states=["lagos", "oyo", "ogun", "ondo", "kwara"]
print(color_list + states)


def quadratic(a,b,c):
    from math import sqrt
    d= (b**2)-(4*a*c)
    e= sqrt (d)
    x1= (-b +e)/(2*a)
    x2= (-b-e)/(2*a)
    print("the roots of the equation are ",x1, x2)
quadratic(2,-6,4)




def okunade(matric_number,first_name,middle_name,department):
    print(matric_number)
    print(first_name)
    print(middle_name)
    print(department)
okunade("BU21CSC2014","Michael","ayotunde","computerscience")
    
    
items=[1,2,3,4,5,6,7,8,9,10]
print(items[0:5])
print(items[5:])
print(items[0],items[3],items[5])


scores=[1,2,3,4,5]
sum=0
count=0
while count <= 5:
    for i in scores:
        sum= sum+i
        count=count+1
average=sum/count
print(average)


my_dict={"num1":3,"num2":4,"num3":5}
total_marks=(my_dict["num1"]+my_dict["num2"]+my_dict["num3"])
print(total_marks)
average= total_marks/3
print(average)



my_dict={"num1":3,"num2":4,"num3":5}
sum=0
count=0
while count <= 3:
    for i in my_dict:
        sum= sum+i
        count=count+1
average=sum/count
print(average)