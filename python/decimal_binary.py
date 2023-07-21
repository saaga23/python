#from decimal to binary using conventional method
# get number from the user
value=int(input("please enter an integer value in range of 0 ....1023:"))
# create an empty binary string to build upon
binary_string=''
# integer must be less than 1024
if 0 <= value < 1024:
    if value >= 512:
        binary_string += '1'
        value %= 512
    else:
        binary_string += '0'
    if value >= 256:
        binary_string +='1'
        value %= 256
    else:
        binary_string += '0'
    if value >= 128:
        binary_string += '1'
        value %= 128
    else:
        binary_string += '0'
    if value >= 64:
        binary_string += '1'
        value %= 64
    else:
        binary_string += '0'
    if value >= 32:
        binary_string += '1'
        value %= 32
    else:
        binary_string += '0'
    if value >= 16:
        binary_string += '1'
        value %= 16
    else:
        binary_string += '0'
    if value >= 8:
        binary_string += '1'
        value %= 8
    else:
        binary_string += '0'
    if value >= 4:
        binary_string += '1'
        value %= 4
    else:
        binary_string += '0'
    if value >= 2:
        binary_string += '1'
        value %= 2
    else:
        binary_string += '0'
    binary_string += str(value)
    
    # display the result
    if binary_string !='':
        print(binary_string)
    else:
        print('cannotconvert')
#conversion using built in functions

#from decimal to binary number
a = 79
# its equivalent base 2
bin_a=bin(a)
print(bin_a)
# binary back to decimal
print(int(bin_a, 2)) #Base 2 (binary)

#from decimal to octal
# get number from the user
value=int(input("please enter an integer value in range of 0 ....1023:"))
# create an empty binary string to build upon
octal_string=''
# integer must be less than 1024
if 0 <= value < 1024:
    if value >= 512:
        octal_string += '1'
        value %= 512
    else:
        octal_string += '0'
    if value >= 256:
        octal_string +='1'
        value %= 256
    else:
        binary_string += '0'
    if value >= 128:
        binary_string += '1'
        value %= 128
    else:
        binary_string += '0'
    if value >= 64:
        binary_string += '1'
        value %= 64
    else:
        binary_string += '0'
    if value >= 32:
        binary_string += '1'
        value %= 32
    else:
        binary_string += '0'
    if value >= 16:
        binary_string += '1'
        value %= 16
    else:
        binary_string += '0'
    if value >= 8:
        binary_string += '1'
        value %= 8
    else:
        binary_string += '0'
    if value >= 4:
        binary_string += '1'
        value %= 4
    else:
        binary_string += '0'
    if value >= 2:
        binary_string += '1'
        value %= 2
    else:
        binary_string += '0'
    binary_string += str(value)
    
    # display the result
    if binary_string !='':
        print(binary_string)
    else:
        print('cannotconvert')

c = int(input("enter number"))
oct_c = oct(c)
print(oct_c)
print(int(oct_c,8))

#from decimal to hexadecimal
b = 79

#base 16(hexadecimal)
hex_b = hex(b)
print(hex_b)
print(int(hex_b,16))

