#leadingzeros.py
num=int(input('please enter an integer in the range from 0...9999:'))

#attenuate the number if necessary
if num<0:#make sure the number is not to small
    num=0
if num>9999:#make sure the number is not to big
    num=9999
    
print(end='[') #print left brace

#extract and print thousands place digit
digit=num//1000             #determine the thosands place digit
print(digit,end="")        #print the thousands-place digit
num %= 1000                 #discard thousand place digit

#extract and print hundreds-place digit
digit=num//100           #determine the hundred place digit
print(digit,end='')     #print the hundred-place digit
num %= 100               #discard hundred place digit

#extact and print tens-place digit
digit=num//10              #determin the tens place digit
print(digit,end='')       #print the tens-place digit
num %= 10                  #discard tens place digits

#Remainder is the one-place digit
print(num,end='')           #print the ones-place digit
print(']')                  #print right brace