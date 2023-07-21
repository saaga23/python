import random

for i in range(10): #Loop 10 times 
    print("Beginning of loop iteration", i)
    try:
        r = random.randiant(1, 4) # r iss psedorandomly 1,2 ,3 ,4
        if r == 1:
            print(int('Fred')) # Try to convert a non-integer
        elif r == 2:
            [][2]=5 # Try to assign to a nonexistant index of the empty list
        elif r == 3:
            print({}[1]) # Try to use a nonexistant key to get an item from a dictionary
        else:
            print(3/0) # Try to divide by zero
    except ValueError:
        print("cannot convert integer")
    except IndexError:
        print('List index is out of range')
    except ZeroDivisionError:
        print('Division by zero not allowed')
        
    print('End of loop iteration',i)