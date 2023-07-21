from random import randrange

def fun1(n):
    result = 0
    while n:
        result += n
        n -= 1
    return result

def fun2(stars):
    for i in range(stars + 1):
        print(end = "*")
        print()
        
def fun3(x, y):
    return 2*x*x  +  3*y

def fun4(n):
    return 10 <= n <= 20

def fun5(a, b, c):
    return a <= b if b <= c else false

def fun6():
    return randrange(0, 2)

print(fun1(5))
print(fun2(5))
fun2(5)
fun2(0)
print(fun3(5, 2))
print(fun4(15))
print(fun4(5))
print(fun4(5000))
print(fun5(2, 4, 6))
print(fun5(4, 2, 6))
if fun5(2, 2, 6):
    print("yes")
else:
    print("no")
    print(fun6())