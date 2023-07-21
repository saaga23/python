class person:
    def set_details(self,name,age):
        self.name = name
        self.age = age
        
    def display(self):
        print('I am a',self.name)
        
    def greet(self):
        if self.age < 80:
            print("Hello, how are you doing?")
        else:
            print('Hello how do you do')
            self.display()
    
    def get_old(self):
        self.age = 75
        
p1 = person()
p2 = person()

p1.set_details('bob',20)
p2.set_details('ted',90)

p1.greet()
p2.greet()

p1.get_old()