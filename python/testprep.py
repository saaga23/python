#Creation testprep
word ="Hello World"
print(word)


letter=word[0]
print(letter)

name=word[3]
print(name)

print(len(word))
print(word.count('o'))
print (word[:3]) 
print(word[:-3])
print(word[3:])
print(word[:])

my_dict = {1:"apple", 2:"Guava"}
print(my_dict[1])
print(my_dict.get(2))
my_dict2 = {"name":"saaga", "key":"five"}
print(my_dict2.get("name"))
squares = {1: 1,2: 4,3: 9,4: 16,5: 25}
print(squares.pop(4))
print(squares)
squares.popitem()
print(squares)
squares.clear()
print(squares)
marks = {}.fromkeys(['Math', 'English', 'Science'],0)
print(marks)
squares = {x: x*x for x in range(8)}
print(squares)

odd_squares = {x: x*x for x in range(11) if x % 2 == 1}
print(odd_squares)
squares = {0:0,1:1, 3: 9, 5: 25, 7: 49, 9:81}
#output: True
print(1 in squares)
print(2 in squares)
print(49 in squares)
print(all(squares))
print(any(squares))
print(len(squares))
print(sorted(squares))
class Dog:
    def _init_(self,name, age):
        self.name = name
        self.age = age
        
a=(("john","18"))
print(a)
class Cat:
    # Class attribute
    species = "Canis familiaris"
    
    
    def __init__(self,name, age):
        self.name = name
        self.age = age
        
