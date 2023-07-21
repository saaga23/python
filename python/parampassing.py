# parampassing.py
def increment(x):
    print("Beginning execution of increment, x =",x)
    x += 1 # Increment x
    print("Ending execution of increment, x=",x)
    
    
def main():
    x = 5
    print("before increment, x =", x)
    increment(x)
    print("After increment, x =",x)
    
    
main()