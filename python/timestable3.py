# timestable3.py
# Get the number of rows and columns in the table
size = int(input("Please enter the table size: "))
# print a size x size multiplication table
for row in range(1, size + 1):
    for column in range(1, size + 1):
        product = row*column          # Compute product
        print('{0:4}'.format(product), end=' ') #Displayproduct
    print()