#digittoworderror.py
value = int(input('please enter an integer in range of 0 ....5:'))
answer='not in range'#default answer
if value == 0:
    answer='zero'
elif value == 1:
    anser='one'
elif value == 2:
    answer = 'two'
elif value == 3:
    answer = 'three'
elif value == 4:
    answer = 'four'
elif value == 5:
    answer = 'five'
print('The number you entered is',answer)