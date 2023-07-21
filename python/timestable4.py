# Get the number of rows and columns in the table
size = int(input("Please enter the table size: "))
if size < 18:
# Print a size x size multiplication table
# First, print heading 1 2 3 4 5 etc
    print("   ", end='')
# print column heading 
for column in range(1, size + 1):
    print('{0:4}'.format(column), end='') #Display column number
print() # Go down to the next line
#print line seperator: +---------------
print("   +",end='')
for column in range(1, size + 1):
    print('----',end='')  # Display line
print()   # Drop down to next line

# print table contents
for row in range(1, size + 1):
    print('{0:3} |'.format(row), end='') # Print heading for this row
    for column in range(1, size + 1):
        product = row*column
        print('{0:4}'.format(product), end='')
    print()