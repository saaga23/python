#startree.py
# Get tree height fom the user
height = int(input('Enter height of tree:'))

# Draw one row for every unit of height
row = 0
while row < height:
    # print leading spaces; as row gets bigger , the number of 
    # loading spaces gets smaller
    count = 0
    while row < height - row:
        print(end=' ')
        count += 1        
        
    # Print out starts,twice the current row plus one:
    # 1. number of starts on left side of the tree
    #   =current row value
    #   2. exactly one star at the center of the tree
    #   3. number of stars on right side of tree
    #   = current row value
    count = 0
    while count < 2*row + 1:
        print(end='*')
        count += 1
    #Move cursor down to next line
    print()
    row += 1 # consider next row