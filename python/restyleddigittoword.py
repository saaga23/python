#restyleddigittoword.py
value = int(input('please enter an integer value in range of 0...5:'))
if value < 0:
    print('Value is too small')
elif value == 0:
    print('Zero')
elif value == 1:
    print('one')
elif value ==2:
    print('Two')
elif value == 3:
    print('Three')
elif value == 4:
    print('four')
elif value == 5:
    print('five')
else:
    print('value is too large')
print('END')