#sunday aspita abraham
#Bu21csc2006
#computer science
#list creation

#create an empty list
list1=[]
#insert your student details to the list
list1.append("sunday")
list1.append("bu21csc2006")
list1.append("computer science")
list1.append("Male")
list1.append("New Hostel")
print(list1)
list1.remove("New Hostel")
#remove hostel and print list
print(list1)
list1.append("kogi state")
print(len(list1))
#pop and print 3 item of the list
print(list1.pop(3))

#sunday aspita abraham
#Bu21csc2006
#computer science
#dictionary creation

#Create a dictionary with your student credentials
dictionary= {"MATRIC":"BU21CSC2006","NAME":"SUNDAY","DEPARTMENT":"COMPUTER SCIENCE","HOSTEL":"NEW HOSTEL","GENDER":"MALE"}
#print out the items from the dictionary
print(dictionary)
#print the hostel from dictionary
print(dictionary["HOSTEL"])
#using get method print surname
print(dictionary.get("NAME"))
#replace sex with state of origin
dictionary["sex"]=["kogi state"]
print(len(dictionary))