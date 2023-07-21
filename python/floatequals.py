#floatequals.py
d1=1.11 - 1.10
d2=2.11 - 2.10
diff =d1 - d2 #compute the difference
if diff < 0:
    diff=-diff
if diff < 0.0000001: # are the values close enough?
    print('same')
else:
    print('different')