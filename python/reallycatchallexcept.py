import random

for i in range(10): #loop 10 times
    print('Beginning of loop iteration', i)
    try:
        r = random.randint(1, 4)
        if r == 1:
            print(int('Fred'))
        elif r == 2:
            [][2] = 5 # try to assign nonexistant index of an ampty list
        elif r == 3:
            print({}[1]) #try to use a nonexistant key to get an item from a dictinarh
        else:
            print(3/0) # Try to divide by zero
    except ValueError:
        print('Cannot convert integer')
    except IndexError:
        print('List index is out of range')
    except ZeroDivisionError:
        print('Division by zero not allowed')
    except:
        print('This program has encountered a problem')
        
    print('End of loop iteration'. i)