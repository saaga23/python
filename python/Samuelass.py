print("Name: Olansebe Samuel Ayomide")
print("Department: Computer Science")
print("Course Title: CIT 203")
print("Matric Number: BU20CIT1012")
print("Group: Group 2")
print("This is the result for the assignment using the for loop")


n1 = []

for i in range (1000, 70000):
    if (i % 14 == 0) and (i % 10 == 0):
        n1.append(str(i))
print(','.join(n1))
    
