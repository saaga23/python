# sum the values in a text file containing integer values
try:
    f = open('mydata.dat')
except OSError:
    print('Could not open file')
else: # File opened propely
    sum = 0
    try:
        f = open('mydata.dat')
    except OSError:
        print('Could not open file')
    else: # File opeed properly
        sum = 0
        try:
            for line in f:
                sum += int(line)
                f.close() # close the file if no exception
        except Exception as er:
            print(er) # Show the problem
            f.close() # close the file exception
        print('Sum = ',sum)
        