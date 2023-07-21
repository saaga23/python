class Person:
    def __init__(self, fname, lname):
        self.firstname = fname
        self.lastname = lname
        
        
    def printname(self):
        print(self.firstname, self.lastname)
        
#Use th eperson class to create an object, and then execute the printname method:

x = Person("John", "Doe")
x.printname()

class Student(Person):
    pass
p = Student("Sunday","Aspita")
p.printname()

