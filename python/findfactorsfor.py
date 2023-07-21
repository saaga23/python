#findfactorsfor.py
# List the factors of the integers 1.. MAX
MAX = 20
for n in range(1, MAX + 1):  # consider numbers 1.. MAX
    print(end=str(n) + ':') # Which intrger are we examining?
    for factor in range(1,n + 1): #Try factors 1...n
        if n % factor == 0:    # Test to see if factor is a factor of n
            print(factor, end='') #If so display it
        print() #Move to next line for next n