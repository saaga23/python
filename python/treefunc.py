def tree(height):
    """
    Draws a tree of a given height.
    """
    row = 0   # First row, from the top, to draw
    while row < height: # draw one row for every unit of height
        # Print leading spaces
        count = 0
        while count < height - row :
            print(end=" ")
            count += 1
        # Print outstars, twice the current row plus one:
        # 1 number of stars on left side of the tree
        #       = current row value
        # 2. exactly one stirin the center oftree
        # 3. number of stars on right side of tree
        #       current row value
        count = 0
        while count < 2*row + 1:
            print(end="*")
            count += 1
        # Move cursor down to next line
        print()
        # change to the next row
        row += 1
    
    
def main():
    """ Allows users to draw trees of various heights"""
    height = int(input("Enter height of tree: "))
    tree(height)
    
    
main()