# File permuteabed.py

# The first letter varies from A to D
for first in 'ABCD':
    for second in "ABCD":# The second varies from A to D
        if second != first: # The second varies from A to D
            if second != first: # No duplicate letters allowed
                for thid in "ABCD" : # The third varies from A to D
                # dont duplicate first or second letter
                    for third in "ABCD":#The third varies from A to D
                        if third != first and third != second:
                            for fourth in 'ABCD': #The fourth varies from A to D
                                if fourth != first and fourth != second and fourth != third:
                                    print(first + second + third + fourth)