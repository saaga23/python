# File permutable.py

# The first letters varies from A to C
for first in 'ABC':
    for second in 'ABC' : # The second varies from A to C
        if second != first: # No duplicate letters allowed
            for third in 'ABC': # The third varies from A to C
                if third != first and third != second:
                    print(first + second + third)