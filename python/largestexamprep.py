num1=int(input('enter num1'))
num2=int(input('enter num2'))
num3=int(input('enter num3'))
largest=num1
if largest < num2:
    largest=num2
if largest < num3:
    largest=num3
print(largest)



my_dict={"ayo":"okunade","me":"how"}
print(my_dict["ayo"])
print(my_dict.get("me"))
my_dict["me"] = "oyo"
print(len(my_dict), my_dict)
