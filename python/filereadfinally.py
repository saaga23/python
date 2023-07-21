#sum the values in a text file containing integers
try:
    f - open('mydata.dat')
except OSError:
    print('Could not open file')
else:
    sum = 0
    try:
        for line in f:
            sum += int(line)
    except Exception as er:
        print(er) # Show the problem
    
    print('Sum = ', sum)
    
except OSError:
    print('Could not open file')
    